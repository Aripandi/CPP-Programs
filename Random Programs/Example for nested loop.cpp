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
           }else if(choice == 'A'||choice == 'a'){
           int num_to_add;
           cout<<"Enter the number to add: ";
           cin>>num_to_add;
           numbers.push_back(num_to_add);
           cout<<num_to_add<<" added"<<endl;
        }else if(choice == 'M' || choice == 'm'){
          if(numbers.size() == 0)
            cout<<"Can't Calculate mean - No data found!"<<endl;
          else{
            int total;
            for(auto num:numbers)
                total += num;
            cout<<"The Mean is "<<total/numbers.size()<<endl;
           }
        }else if(choice == 'S' || choice == 's'){
          if(numbers.size() == 0)
            cout<<"Can't find Smallest number - No data found"<<endl;
          else{
            int smallest = numbers.at(0);
            for(auto num:numbers)
                if (num < smallest)
                smallest = num;
            cout<<"The smallest number: "<<smallest<<endl;
          }
        }else if(choice == 'L'||choice == 'l'){
          if(numbers.size()==0)
            cout<<"Can't find largest number - No data found"<<endl;
          else{
            int largest = numbers.at(0);
            for(auto num:numbers)
                if(num>largest)
                largest = num;
            cout<<"The Largest number: "<<largest<<endl;
          }
        }else if(choice == 'Q' || choice == 'q'){
          cout<<"Good BYe";
        }
        else
            cout<<"Unknown Selection, please try again";

    }while(choice != 'Q' && choice != 'q');

    return 0;
}

