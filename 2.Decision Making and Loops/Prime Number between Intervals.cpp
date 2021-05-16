#include<iostream>

using namespace std;

int main()
{
    int start_num,end_num;
    bool isPrime = true;

    cout<<"Starting Number: ";
    cin>>start_num;
    cout<<"Ending Number: ";
    cin>>end_num;

    cout<<"prime Numbers "<<start_num<<" and "<<end_num<<": ";
    while(start_num < end_num)
    {
        isPrime = true;
        if(start_num == 0 || start_num == 1){
            isPrime = false;
        }
        else{
            for(int i=2;i<start_num/2;i++){
                if(start_num%i == 0)
                    isPrime = false;
                   break;
            }
        }

        if(isPrime)
            cout<<start_num<<" ";

        ++start_num;
    }

    return 0;
}
