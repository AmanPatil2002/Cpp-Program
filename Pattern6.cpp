#include<iostream>
using namespace std;

int main()
{
    /*
            3 2 1 
            3 2 
            3
    */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j >= i+1 ; j--)
        {
            cout << j;
        }
    cout << endl;
    }
    cout << '\n';

    return 0;
}