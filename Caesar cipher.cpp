#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //FCI-Programming 1-2018-Assignment 2
    //Program Name: Caesar Cipher
    //Author1,ID&Group: Khloud Khaled,20170101,G4
    /*Purpose:It's a type of substitution cipher in which
      each letter in the plaintext is replaced by a letter at some fixed
      number of positions down the alphabet*/

    cout<<"Ahlan ya user ya habibi"<<endl<<"What do you want to do today?"<<endl;
    cout<<"1-Cipher"<<endl<<"2-Decipher"<<endl<<"3-End"<<endl;
    int c;
    char msg[100],ch;
    int i,shift;
    cin>>c;
    if(c==1){
        cout<<"Enter your message to cipher.."<<endl;
        cin.ignore();
        cin.getline(msg,100);
        cout<<"The number of shifts you want.. "<<endl;
        cin>>shift;
        for(i=0;msg[i]!= '\0';++i){
            ch=msg[i];
            if(ch>='a'&&ch<='z'){
                ch=ch+shift;
                if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
                msg[i]=ch;
            }

            else if(ch>='A'&&ch<='Z'){
                ch=ch+shift;
                 if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
                msg[i]=ch;
            }
        }
        cout<<"Ciphered message is: "<<msg;
}
if(c==2){
   cout<<"Enter your message to decipher.."<<endl;
        cin.ignore();
        cin.getline(msg,100);
        cout<<"The number of shifts you want.. "<<endl;
        cin>>shift;
        for(i=0;msg[i]!= '\0';++i){
            ch=msg[i];
            if(ch>='a'&&ch<='z'){
                ch=ch-shift;
                 if(ch > 'z'){
                ch = ch + 'z' - 'a' + 1;
            }
                msg[i]=ch;
            }
            else if(ch>='A'&&ch<='Z'){
                ch=ch-shift;
                 if(ch > 'Z'){
                ch = ch + 'Z' - 'A' + 1;
            }
                msg[i]=ch;
            }
        }
        cout<<"Deciphered message is: "<<msg;
}
if(c==3){
    cout<<"You end the program !"<<endl;
}

}
