//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cout<<"Enter the number to create multiple table: ";
//    cin>>n;
//
//    for(int i=1;i<=10;i++){
//      cout<<i<<"*"<<n<<"="<<i*n<<endl;
//    }
//    return 0;
//}

#include<iostream>

using namespace std;

int main()
{
    int n,range;

    cout<<"Enter the number to create multiple table: ";
    cin>>n;
    cout<<"Enter range: ";
    cin>>range;

    for(int i=1;i<=range;i++){
      cout<<i<<"*"<<n<<"="<<i*n<<endl;
    }
    return 0;
}

