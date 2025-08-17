#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void LowerCase(string& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if((int)s[i] >= 65 && (int)s[i] <= 90)
            s[i] += 'a' - 'A';
    }
    return;
    
}

void UpperCase(string& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if((int)s[i] >= 'a' && (int)s[i] <= 'z')
            s[i] -= 'a' - 'A';
    }
    return;
    
}

int main()
{
    string Word;
    cin >> Word;
    int Lower = 0;
    int Upper = 0;
    for(int i = 0; i < Word.length(); i++)
    {
        if(islower(Word[i]))
            Lower++;
        else   
            Upper++;
    }
    if(Upper > Lower)
        UpperCase(Word);
    else 
        LowerCase(Word);

    cout << Word;
}