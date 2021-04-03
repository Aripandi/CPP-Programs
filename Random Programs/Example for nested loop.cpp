#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> numbers{};
    char choice{};

    do{
        //Display the menu
        cout<<"\nP-Print the Numbers in List"<<endl;
        cout<<"A--Add the numbers to list"<<endl;
        cout<<"m-find the mean of the list"<<endl;
        cout<<"S-Display the smallest number"<<endl;
        cout<<"L-Display the Largest number"<<endl;
        cout<<"Q-Quit the Process"<<endl;
        cout<<"\nEnter the choice: ";
        cin>>choice;
        
        if(choice == 'P' || choice == 'p'){
            if(numbers.size() == 0)
              cout<<"[] List is empty";
            else{
                cout<<"[";
                for(auto num:numbers)
                    cout<<num<<" ";
                    cout<<"]"<<endl;
            }

