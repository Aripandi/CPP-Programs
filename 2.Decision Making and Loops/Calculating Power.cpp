#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   float base,exponent,result=1;

    cout<<"Base: ";
    cin>>base;
    cout<<"Exponent: ";
    cin>>exponent;

    result = pow(base,exponent);

   /*using while loop
   while(exponent!=0)
   {
       result*=base;
       --exponent;
   }*/

    cout<<base<<"^"<<exponent<<"="<<result;


    return 0;
}
