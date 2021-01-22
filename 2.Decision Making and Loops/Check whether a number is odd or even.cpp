#include<iostream>

int main()
{
    int num;

    std::cout<<"Enter the Number: ";
    std::cin>>num;

    if(num%2==0)
        std::cout<<num<<" is even number";
    else
        std::cout<<num<<" is odd number";

    return 0;
}
