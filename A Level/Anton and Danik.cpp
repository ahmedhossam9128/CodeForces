#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n > 0 && n <100000)
            break;
    }
    int Anton = 0;
    int Danik = 0;
    string s;
    while(true)
    {
        cin >> s;
        if(s.length() == n)
            break;
        cout << "Pls Enter Every Game Result\n";
    }
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A')
            Anton++;
        else if(s[i] == 'D')
            Danik++;
    }
    if(Anton > Danik)
        cout << "Anton\n";
    else if(Danik > Anton)
        cout << "Danik\n";
    else
        cout << "friendship\n";

}