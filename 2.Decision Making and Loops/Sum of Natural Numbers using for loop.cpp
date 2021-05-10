#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Enter the positive number: ";
    cin>>n;


    for(int i=1;i<n;i++){
        sum+=i;
    }
     cout<<"Sum of the numbers: "<<sum;


    return 0 ;
}
