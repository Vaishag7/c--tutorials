#include<iostream>
using namespace std; 
int main(){
    int n; 
    cin>>n;
    int i =1, j=1; 
    while(i<=n){
        j=1; 
        while(j<=i){
            cout<<char(96+n-i+1+j-1); 
            j=j+1; 
        }
        cout<<endl; 
        i=i+1; 

    }
}