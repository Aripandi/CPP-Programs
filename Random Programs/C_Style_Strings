#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
    char first_name[20] {};
    char last_name[20]{};
    char full_name[30]{};
    char temp[50] {};
    
       /*cout<<"Enter the First Name: ";
    cin>>first_name;

    cout<<"Enter the last Name: ";
    cin>>last_name;

    cout<<"Hello Your First name "<<first_name<<" have "<<strlen(first_name)<<" Characters"<<endl;
    cout<<"Your Last Name "<<last_name<<" have "<<strlen(last_name)<<" Characters"<<endl;

    strcpy(full_name,first_name);
    strcat(full_name, " ");
    strcat(full_name,last_name);
    
    cout<<"Your Full Name is "<<full_name;*/

    cout<<"Enter your full name: ";
    cin.getline(full_name,50);

    cout<<"Your full name: "<<full_name<<endl;

    cout<<"______________________________"<<endl;


    strcpy(temp,full_name);

    if(strcmp(temp,full_name)== 0)
        cout<<temp<<" and "<<full_name<<" are same"<<endl;
    else
        cout<<temp<<" and "<<full_name<<" are different"<<endl;

    cout<<"_______________________________"<<endl;

    for(size_t i {0};i<strlen(full_name);i++){
        if(isalpha(full_name[i]))
          full_name[i] = toupper(full_name[i]);
    }
    cout<<"Your full name is: "<<full_name<<endl;


    cout<<"________________________________"<<endl;

    if(strcmp(temp,full_name)== 0)
        cout<<temp<<" and "<<full_name<<" are same"<<endl;
    else
        cout<<temp<<" and "<<full_name<<" are different"<<endl;

    cout<<"________________________________"<<endl;

    cout<<"Result of Comparing "<<temp<<" and "<<full_name<<" : "<<strcmp(temp,full_name)<<endl;
    cout<<"Result of Comparing "<<full_name<<" and "<<temp<<" : "<<strcmp(full_name,temp)<<endl;


    return 0;

}
