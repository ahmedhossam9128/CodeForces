#include <iostream>
using namespace std;

int main()
{
    int n;
    bool Petya,Vasya,Tonya;
    int implementations;
    do
        cin >> n;
    while(n < 1 || n > 1000);

    for(int i = 0; i < n; i++)
        {
            cin >> Petya >> Vasya >> Tonya;
            if((Petya & Vasya ) || (Petya & Tonya) || (Vasya & Tonya))
                implementations++;
        }
        
    cout << implementations << endl;
    return 0;
}