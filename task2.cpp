#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string s){

	for(unsigned int i = 0; i < s.length()/2; i++)
	{
        if(s[i] != s[s.length()-1 - i]) return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	cout << isPalindrom("");
	return 0;
}

