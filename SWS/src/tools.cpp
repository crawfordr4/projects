/*
This file contains the tools class, which provides.
*/

class tools{
private:

public:
	int strlen(char* input){
		int i = 0;
		while(input[i++] != '\0')
			//Do nothing...
		return 0;
	}

	int strcmp(char* input1, char* input2){
		int i = 0;
		while(input1[i] != '\0'){
			if(input1[i] != input2[i++])
				return 0;
		}
		if(input2[i] != '\0')
			return 0;
		return 1;
	}

	int segcompare(char* input, char* comparison){
		int i = 0;
		while(comparison[i] != '\0' && input[i] != '\0'){
			if(comparison[i] != input[i++])
				return 0;
		}

		if(input[i] == '\0' && comparison[i] != '\0')
			return 0;

		return 1;
	}
};