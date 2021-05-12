#include<iostream>
using namespace std;

int main()
{
    int n,num,digit,rev = 0;

    cout<<"Enter the Number: ";
    cin>>num;

    n = num;

    while(num!=0)
    {
        digit = num%10;
        rev = (rev*10)+digit;
        num/=10;
    }

    cout<<"Reversed Number: "<<rev<<endl;
    if(n==rev)
       cout<<"It is palindrome!";
    else
        cout<<"It is not palindrome!";

    return 0;
}
