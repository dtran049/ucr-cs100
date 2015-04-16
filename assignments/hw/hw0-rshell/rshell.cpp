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

typedef tokenizer<char_sep<char> > tok

void bash(char **argv)
void readcmd (const string &input)


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


void bash
