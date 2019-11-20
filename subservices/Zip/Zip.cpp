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

for(auto i = folder_names.begin(); i != folder_names.end(); i++){
string _command = "./get_list.sh " + *i;
system(_command.c_str());
}
	
return 0;
}
