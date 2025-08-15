#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int unique_Char(string );
bool IsLowerCase(string );

int main()
{
    string msg;
    do
    {
        cin >> msg;
    } while (!(msg.length() < 100 && IsLowerCase(msg)));

    if(unique_Char(msg)%2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    


    
}

bool IsLowerCase(string s)
{
    int U = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i]))
            U++;
    }
    return (U == 0);
}

int unique_Char(string s)
{
    set<char> unique_Chars;
    for(int i = 0; i < s.length(); i++)
    {
        unique_Chars.insert(s[i]);
    }
    return unique_Chars.size();
}