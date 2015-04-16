#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <boost/tokenizer.hpp>

using namespace std;
using namespace boost;

typedef tokenizer<char_separator<char> > tok

void bash(char **argv)
void readcmd (const string input)


int main()
{
	//string username;
	bool exit = true;
	while(!exit)
	{
		cout << "$ ";
		getline(cin, input);
		if(input == "exit")
		{
			exit(1);
		}
		if(input.find("#") != string::npos)
		{
			input.resize(input.find("#"));
		}
		

	return 0;
}

void readcmd (const string input)
{

}


void bash()
{
	int status = 0;
	int pid - fork();
	if(pid < 0)
	{
		perror("fork() had an error. \n");
		exit(1);

	}
	else if(pid == 0)
	{
		if (execvp(argv[0], argv) == -1)
		{
			perror("execvp() had an error. \n");
		}
		exit(1);
	}
	else if(pid > 0)
	{
		if (wait(&status) == -1)
		{
			perror("wait() had an error. \n");
		}
	}
	
	return status;
}




