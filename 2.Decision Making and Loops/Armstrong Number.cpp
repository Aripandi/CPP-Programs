#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,digits,sum=0,temp;

    cout<<"Enter the number: ";
    cin>>num;

    temp = num;

    for(int i=num;i>0;i=i/10){
        digits++;
    }

    while(num>0){
    sum = sum + pow(num%10,digits);
    num = num/10;
    }

    if(sum == temp)
        cout<<"It is Armstrong Number!";
    else
        cout<<"It is not a Armstrong number!";

    return 0;

}
