#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

int main(int argc, char** argv){

vector<string> folder_names;

//to handle the list of strings
ifstream f;
string input;
system("./get_folders.sh");
system("touch images.list");
f.open("images.list");

while(!f.eof()){
f >> input;

if(input != ""){
	folder_names.push_back(input);
}

}
//returns us a nice list of whats going on with our images folder
//by listing us the subfolders, and retreiving a list of images in those folders
for(auto i = folder_names.begin(); i != folder_names.end(); i++){
	//calls the get_list.sh script which returns a list of those images
	string _command = "./get_list.sh " + *i;
	//converting to system compatible unicode cstring
	system(_command.c_str());

}


for(auto i = folder_names.begin(); i != folder_names.end(); i++){
	string _command = "./zip " + *i;
	//Converting to system compatible unicode cstring
	//zips images and processes them as zip files with 
	//Epoch identifiers 
	system(_command.c_str());


}


	
return 0;
}
