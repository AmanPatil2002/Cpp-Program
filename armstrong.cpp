#include <iostream>
using namespace std;
                                                                                                                                                                                                                                                                                                                                      
int main()
{
    int n,r,a=0,b;
    cout<<"Enter the number =";
    cin>>n;
    b=n;
    while (n>0)
    {
        r=n%10;
        a=a+(r*r*r);
        n=n/10;
    }
    if (b==a)
    {
        cout<<"Armstrong Number"<<'\n';
    }
    else
    {
        cout<<"Not Armstrong Number"<<'\n';
    }

    return 0;
}