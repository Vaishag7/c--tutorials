#include<iostream>
using namespace std; 
int main(){
    float n; 
    cin>>n;
    float i=1;
    while(i<=n){
        float far= 9*i/5 + 32; 
        cout<<far<<" "; 
        i = i+1; 
    }
}