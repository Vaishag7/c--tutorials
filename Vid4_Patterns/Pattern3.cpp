#include<iostream>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int i=1;  
    int start=0; 
    while(i<=n){
        int j=1; 
        while(j<=i){
            start= start+1; 

            cout<< start<<" "; 
            j=j+1; 
        }
        cout<<endl;
        i=i+1; 
    }
}