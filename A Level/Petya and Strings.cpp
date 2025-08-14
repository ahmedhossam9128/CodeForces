#include <iostream>
#include <string>

using namespace std;

void Lower(string& );

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    Lower(s1);
    Lower(s2);
    cout << s1 << endl << s2 << endl;
    if(s1 > s2)
        cout << "1";
    else if(s1 < s2)
        cout << "-1";
    else
        cout << "0";

}

void Lower(string& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if((int)s[i] >= 65 && (int)s[i] <= 90)
            s[i] += 'a' - 'A';
    }
    return;
}

