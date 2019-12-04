#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
#include <set>
using namespace std;
int main(int argc, char **argv){
	
	//input file initialization
	ifstream f;
	f.open("subreddit.txt");
	string _location = "";
	string _command = "";
	
	
	while(!f.eof()){
	

		//initialized above to prevent weird C++ interaction
	
		//these lines prevent a bug where the code was reading twice. This is a useful solution. Pretty sure this is linear
		//and also easy to understand. Set
		set<string> locales;
	
		f >> _location;
	
		//lets get the command dynamically
		// with a little bit of concurrent scripting. This has diminishing returns
		// with the number of processors you have available. may add a bash script that instead 
		// runs one of two paths, concurrency or nonconcurrency based on the number of objects returned
			if(locales.find(_location) == locales.end()){
			
				_command = "python3 ../API/grab_pictures.py -s " + _location + " -loc ../Images &";
				system(_command.c_str());
				locales.insert(_location);
}	
}

	f.close();
	system("clear");
	return 0;
}
