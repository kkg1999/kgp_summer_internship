#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	string filename;
	cin>>filename;
	
	string command_string = "grep ^ATOM "+filename+" > mainfile.txt";
	int i,len=command_string.length();
	char command[len+1];
	for(i=0;i<len;i++)
	{
		command[i]=command_string[i];
	}
	command[i]='\0';
	system(command);

return 0;
}