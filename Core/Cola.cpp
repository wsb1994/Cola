#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
using namespace std;
int main(int argc, char **argv){

	ifstream f;
	f.open("subreddit.txt");
	string _location = "";
	string _command = "";
	f >> _location;
while(!f.eof()){
	//initialize to prevent weird C++ interactions
	//this line prevents a bug where the code was reading twice. This is a hacky solution
	//explore better options
	f >> _location;
	//lets get the command dynamically
	//concurrency
	_command = "python3 ../API/grab_pictures.py -s " + _location + " -loc ../Images &";

	system(_command.c_str());
	system("clear");
}

f.close();
system("clear");
return 0;
}
