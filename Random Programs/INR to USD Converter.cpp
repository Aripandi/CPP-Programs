//c++ program to convert indian rupees to US Dollars

#include<iostream>

using namespace std;

int main()
{
    const double usd_per_inr {79.94};

    double inr{0.0};
    double usd{0.0};

    cout<<"Welcome to INR to USD Converter!"<<endl;
    cout<<"Enter Indian Rupees: ";
    cin>>inr;

    usd = inr*usd_per_inr;

    cout<<inr<<" rupees"<< " = "<<usd<<" Dollars";

    return 0;
}
