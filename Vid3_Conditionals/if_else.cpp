#include<iostream>
using namespace std; 
int main(){
    char ch; 
    cout<<"The value of character is"<<endl; 
    cin>>ch; 
    ch = int(ch); 
    if(ch>=97&&ch<=122){
        cout<<"ch is lowercase"<<endl; 
    }
    else if(ch>=65&&ch<=90){
        cout<<"ch is uppercase"<<endl;
    }
    else if(ch>=48&&ch<=57){
        cout<<"ch is numeric"<<endl;
    }
}
