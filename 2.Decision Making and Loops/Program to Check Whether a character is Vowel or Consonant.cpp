#include<iostream>

using namespace std;

int main()
{
    char c;
    int IsLowerVowel, IsUpperVowel;

    cout<<"Enter the Character: ";
    cin>>c;

    // evaluates to 1 (true) if c is a lowercase vowel
    IsLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    IsUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if(!isalpha(c))
    {
       cout<<"Invalid Input!!"<<endl;
    }
    else if(IsLowerVowel || IsUpperVowel){
       cout<<c<<" is Vowel"<<endl;
    }
    else{
        cout<<c<<" is consonant"<<endl;
    }

    return 0;
}
