#include<iostream>
#include<string>

using namespace std;

int main()
{
   string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   string key  {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

   string secret_message {};
   cout<<"Enter the secret Message: ";
   getline(cin,secret_message);

   string encrypted_message {};

   cout<<"\nEncrypted Message............."<<endl;

   for(char c:secret_message){
     size_t position = alphabet.find(c);
   if(position != string::npos){
      char new_char {key.at(position)};
      encrypted_message += new_char;
   }else{
      encrypted_message += c;
    }
  }

  cout<<"\nEncrypted Messages: "<<encrypted_message<<endl;

  string decrypted_message {};

  cout<<"\nDecrypted Messages.............."<<endl;

  for(char c:encrypted_message){
    size_t position = key.find(c);
  if(position != string::npos){
    char new_char {alphabet.at(position)};
    decrypted_message += new_char;
  }else{
    decrypted_message += c;
  }
  }
  
  cout<<"\nDecrypted Messages: "<<decrypted_message<<endl;


  cout<<endl;
  return 0;
}
