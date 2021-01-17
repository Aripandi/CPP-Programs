#include<iostream>

int main()
{
    int dividend,divisior,remainder,quotient;

    //get the number
    std::cout<<"Enter the dividend: ";
    std::cin>>dividend;
    std::cout<<"Enter the divisior: ";
    std::cin>>divisior;

    remainder = dividend%divisior;
    quotient = dividend/divisior;

    std::cout<<"Remainder: "<<remainder<<"\n";
    std::cout<<"Quotient: "<<quotient;

    return 0;
}
