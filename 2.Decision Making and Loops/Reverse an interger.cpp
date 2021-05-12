#include<iostream>

using namespace std;

int main()
{
    int n,remainder,reversed_num = 0;

    cout<<"Enter the numbers to reverse: ";
    cin>>n;

    while(n!=0)
    {
        remainder = n%10;
        reversed_num = reversed_num*10 + remainder;
        n/=10;
    }

    cout<<"reversed Number: "<<reversed_num;

    return 0;
}
