#include<iostream>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int i=n, j=1; 
    while(i>0){
        j=1; 
        while(j<=i){
            cout<<"*"<<" "; 
            j=j+1; 
        }
        cout<<endl; 
        i=i-1; 
    }
}