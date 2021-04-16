#include<iostream>
#include<vector>
#include<cctype> //used for toupper

using namespace std;

//functions for dispplay the list and get velues to be selected
void display_menu();
char get_selection();

//funtions to handle after got the value from the user
void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

//funtion to find mean, largest and smallest
void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

int main()
{
   vector<int> numbers;
   char selection;

   do{
    display_menu();
    selection = get_selection();

    switch(selection){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
    }
   }while (selection != 'Q')


    cout<<endl;
    return 0;
}

void display_menu() {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "F - Find a number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
}


char get_selection(){
     char selection {};
     cin>>selection;
     return toupper(selection);
}

void handle_display(const vector<int> &v){
    if (v.size() == 0)
        cout<<"[] - List is empty!"<<endl;
    else
        display_list(v);
}


void handle_add(vector<int> &v){
    int num_to_add {};
    cout<<"Enter the number to add: ";
    cin>>num_to_add;
    v.push_back(num_to_add);
    cout<<num_to_add<<" added "<<endl;
}

void handle_mean(const vector<int> &v){
    if(v.size() == 0)
        cout<<"Can't find mean as the list is empty!"<<endl;
    else
       cout<<"The mean is "<<calculate_mean(v)<<endl;
}
