#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    int i = 2; 
    while(i<n){
        if(n%i!=0){
            i=i+1; 
        }
       
    }
    if(i==n){
        cout<<"Number is prime"; 
    }
    else{
        cout<<"Number is not prime"; 
    }
    
}