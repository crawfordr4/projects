
class listener{

private:

	//Generate a new thread to handle 

	int socket, clientSocket, one;

	sockaddr_in clientAddresss, serverAddress;

	socklen_t sin_len;

public:
	int start(int port){
		one = 1;
		sin_len = sizeof(clientAddresss);
		sock = socket(AF_INET,SOCK_STREAM,0);
		if(clientSocket < 0){
			printf("\nERROR: Cannot use this socket!\n");
			return 1;
		}
		setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(int));

		//Set server address parameters...
		serverAddress.sin_family = AF_INET;
		serverAddress.sin_addr.s_addr = INADDR_ANY;
		serverAddress.sin_port = htons(port);

		if(bind(sock, (struct sockaddr *) &serverAddress, sizeof(serverAddress)) == -1){
			printf("\nCannot bind!\n");
			close(sock);
			return 0;
		}
		return 1;
	}

	void setListen(){
		listen(sock, 5);
	}

	void listener(){
		clientSocket = accept(sock, (struct sockaddr *) &clientAddresss, &sin_len);
		if(clientSocket >= 0){
			resp = (http*)malloc(sizeof(http));
			item = (page*)malloc(sizeof(page));
			request *reqData;
			if(resp->get(clientSocket)){
				resp->getData();
				if((reqData = resp->returnData()) != NULL){
					resp->destroy();
					item->setup(clientSocket);
					item->getItem(reqData->URL);
				}
			}
			free(resp);
			free(item);	

		}
	}
};