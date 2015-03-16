#include <server.h>

using namespace std;

int main(int argc, char* argv[]){
	tools myTools;
	char* str1 = "We need some time to discover Hello world!";
	char* str2 = "Hello world!";

	if(myTools.segcompare(&str1[25],str2))
		std::cout << "\nSuccess!\n";

	sqlite3* database;
	int rc;
	rc = sqlite3_open("test.db", &database);
	if(rc){
		std::cout << "\nCan't open database." << sqlite3_errmsg(database) << "\n";
	}
	else{
		std::cout << "\nOpened database successfully!\n";
	}
	sqlite3_close(database);
}