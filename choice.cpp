#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char choice;
    cout <<"+"<<endl;
    cout <<"-"<<endl;
    cout <<"*"<<endl;
    cout <<"/"<<endl;
    cout <<"Enter any choice above :";
    cin >>choice;
    cout <<"Enter two Numbers :";
    cin >>a>>b;
    switch (choice)
    {
    case '+':
        cout <<"Addition :"<<a+b;
        break;
    case '-':
        cout <<"Subtraction :"<<a-b;
        break;
    case '*':
        cout <<"Multiplication :"<<a*b;
        break;
    case '/':
        cout <<"Division :"<<a/b;
        break;
    default:
        cout <<"Choice is wrong";
        break;
    }
    return 0;
}