#include<iostream>

int main()
{
    int a,b,temp=0;

    std::cout<<"Enter the Number1: ";
    std::cin>>a;
    std::cout<<"Enter the Number2: ";
    std::cin>>b;

    temp = a;
    a = b;
    b = temp;

    std::cout<<"Number1: "<<a<<"\n";
    std::cout<<"Number2: "<<b;

    return 0;
}
