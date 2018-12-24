#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string s){

    // в этом ифе как раз и проверяется что строка не пустая
    // возможно вы не увидели вчера эту строчку, или я слишком туп и не понимаю чего-то))
	if(s.length() > 0)
	{
		for(unsigned int i = 0; i < s.length()/2; i++)
		{
            if(s[i] != s[s.length()-1 - i]) return false;
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

