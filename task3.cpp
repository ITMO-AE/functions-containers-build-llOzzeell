#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrom(string s){

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

vector<string> PalindromFilter(vector<string> &words, unsigned int minlength){

    vector<string> newWords;
    if(words.size() <= 100)
    {
        for(auto w : words)
        {
            if(w.length() >= minlength && w.length() <= 100)
            {
                if(isPalindrom(w))
                {
                    newWords.push_back(w);
                }
            }
        }
    }
    return newWords;
}

int main(int argc, char **argv)
{
    vector<string> vec = {"words", "abba", "saas", "defrsfde", "ferummuref", "abcddcba", "dwadwdwafgrg"};

    vector<string> vec2 = PalindromFilter(vec, 3);

    for(auto w: vec2)
    {
        cout << w << endl;
    }

    return 0;
}


