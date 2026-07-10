#include <iostream>
using namespace std;

void printEvenNumbers(int N)
{
    cout<<"Even :";
    for (int i = 1; i <= 2 * N; i++)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
}
void printOddNumbers(int N)
{                                      
    cout<<"\nOdd :";
    for (int i = 1; i <= 2 * N; i++)
    {
        if (i % 2 != 0)
        {
            cout<<i<<" ";
        }
    }                                                                              
}
                                                                                                                                                                                                                                                                                                                                      
int main()
{                                                                                                                                                                                                                       
    int N;                                                                                                  
    cout<<"Enter a Number :";
    cin>>N;

    printEvenNumbers(N);
    printOddNumbers(N);
                                                                                                                                                                 
    return 0;
}