#include<iostream>
using namespace std; 
int main(){
    int n; 
    cin>>n;
    int i =0, j=0; 
    while(i<n){
        j=0; 
        while(j<n){
            cout<<char(97+j); 
            j=j+1; 
        }
        cout<<endl; 
        i=i+1; 

    }
}