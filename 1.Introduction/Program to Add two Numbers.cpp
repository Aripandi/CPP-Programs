#include<iostream>

int main()
{
    int n1,n2,sum;

    //Get the value from user
    std::cout<<"Enter the First Number: ";
    std::cin>>n1;
    std::cout<<"Enter the Second Number: ";
    std::cin>>n2;

    //Add the number and store in Sum
    sum = n1+n2;

    //Print the sum
    std::cout<<"Sum : "<<n1<<"+"<<n2<<"="<<sum;

    return 0;
}
