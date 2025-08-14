#include <iostream>
using namespace std;

void sort(int*, int);
void swap(int*, int*);

int main()
{
    int n;
    int* box = new int;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> *(box+i);
    }
    sort(box, n);
    
    for(int i = 0; i < n; i++)
    {
        cout << *(box+i) << " ";
    }

}

void sort(int* box,int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(*(box+i) > *(box+j))
                swap(box+i,box+j);
        }
    }
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}