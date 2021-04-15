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
