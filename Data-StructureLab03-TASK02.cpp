#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    char msg[100],ch;
    cout<<"ENTER THE MESSEGE YOU WANT: ";
    cin.getline(msg,100);
    cout<<"SKIPPED NUMBER: ";
    cin>>n;

    for(int i=0;msg[i]!='\0';i=i+2){

    ch=msg[i];
    if(ch>='a'&& ch<'z'){
        ch=ch+n;
        msg[i]=ch;

    }

}
cout<<"UPDATED MESSEGE: " <<msg;
}
