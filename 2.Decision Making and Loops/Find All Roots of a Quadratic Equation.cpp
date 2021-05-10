#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c,x1,x2,discriminant, realPart, imaginaryPart;
    discriminant = b*b-4*a*c;

    cout<<"Enter coefficients a,b and c: ";
    cin>>a>>b>>c;

    if(discriminant>0){
            x1 = (-b + sqrt(discriminant))/(2*a);
            x2 = (-b - sqrt(discriminant))/(2*a);
            cout<<"Roots are real and different: "<<endl;
            cout<<"x1 = "<<x1<<endl;
            cout<<"X2 = "<<x2<<endl;
    }

    else if(discriminant == 0){
        cout<<"Roots are real and same: "<<endl;
        x1 = -b/(2*a);
        cout<<"X1 = X2 = "<<x1<<endl;
    }

    else{
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant/(2*a));
        cout<<"Roots are complex and different: "<<endl;
        cout<<"X1 = "<<realPart<<"-"<<imaginaryPart<<"i"<<endl;
        cout<<"X2 = "<<realPart<<"-"<<imaginaryPart<<"i"<<endl;
    }


    return 0;
}
