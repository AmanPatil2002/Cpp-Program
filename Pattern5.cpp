#include<iostream>
using namespace std;

int main()
{
    /*
            1
            1 2
            1 2 3
    */
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout <<  j + 1;
        }
    cout << endl;
    }
    cout << '\n';

    return 0;
}