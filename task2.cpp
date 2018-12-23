#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string s){
	
	if(s.length() > 0){
		for(unsigned int i = 0; i < s.length()/2; i++){
			
			if(s[i] != s[s.length()-1 - i]) return false;
			//cout << s[i] << " " << s[(s.length()-1)-i] << endl;
		}
		return true;
	}
	else return false;
	
}

int main(int argc, char **argv)
{
	cout << isPalindrom("abba");
	return 0;
}

