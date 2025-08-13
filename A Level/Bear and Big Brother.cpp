#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int years = 0;
    while(true)
    {
        cin >> a >> b;
        if (a >= 1 && b >= 1 && a <= 10 && b <= 10 && a <= b)
            break;
    }
for(years; ;years++)
{
    if(a > b)
        break;
    a*=3;
    b*=2;
}
    cout << years << endl;   
    return 0;
}