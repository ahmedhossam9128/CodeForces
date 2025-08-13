#include <iostream>
using namespace std;

int swaps = 0;
void swap_row(int , int);
void swap_collumn(int j, int a);
// void print_matrix();
int Matrix[5][5];

int main()
{

    for(int i = 0; i < 5; i++)
        cin >> Matrix[i][0] >> Matrix[i][1] >> Matrix[i][2] >> Matrix[i][3] >> Matrix[i][4];
    int i,j;
            for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
                {
                    if(Matrix[i][j] == 1)
                        break;
                }
            if(Matrix[i][j] == 1)
                break;
        }
        while(Matrix[2][2] == 0)
    {

        if(i > 2)
        {
           swap_row(i, -1);
           i--;
        }
        else if(i < 2) 
        {
            swap_row(i, 1);
            i++;
        }
        if(j > 2)
        {
            swap_collumn(j, -1);
            j--;
        }
        else if(j < 2)
        {
            swap_collumn(j, 1);
            j++;
        }
    }
    cout << swaps;
    return 0;
}


void swap_row(int i, int a)
    {
        for(int j = 0; j < 5; j++)
            {
                int temp = Matrix[i][j];
                Matrix[i][j] = Matrix[i+a][j];
                Matrix[i+a][j] = temp;
            }
        //print_matrix();
        swaps++;
        return;
    }

void swap_collumn(int j, int a)
    {
        for(int i = 0; i < 5; i++)
            {
                int temp = Matrix[i][j];
                Matrix[i][j] = Matrix[i][j+a];
                Matrix[i][j+a] = temp;
            }
        //print_matrix();
        swaps++;
        return;
    }
// void print_matrix()
// {
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++)
//             cout << Matrix[i][j] << " ";
//         cout << endl;
//     }
//     cout << "----------" << endl;
// }