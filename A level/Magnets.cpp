#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int new_magnet = 0;
    int old_magnet = 0;

    int groups = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> new_magnet;
        if(old_magnet != new_magnet)
            groups++;
        old_magnet = new_magnet;
    }
    cout << groups;
}