#include<iostream>
using namespace std;

int fact(int n);
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Factorial of the number: "<<fact(n);

    return 0;
}

int fact(int n)
{
    if(n==0)
        return 1;

    else
        return n*fact(n-1);
}

