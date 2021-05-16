#include<iostream>

using namespace std;

int main()
{
    int n,i;
    bool isPrime = true;

    cout<<"Enter the number: ";
    cin>>n;

    if(n==0 || n==1){
        isPrime = false;
    }
    else{
       for(i=2;i<=n/2;i++){
        if(i%n==0){
            isPrime = false;
          i = i+1;
        }
    }
    }
    if(isPrime)
        cout<<n<<" is Prime Number!";
    else
        cout<<n<<" is not prime number";

    return 0;

}
