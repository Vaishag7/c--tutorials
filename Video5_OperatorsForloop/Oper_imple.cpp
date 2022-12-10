#include<iostream>
using namespace std; 
int main(){
    
    int a = 7;
    int b=8; 
    cout<<(a&b) <<" "<< (a|b)<<" "<<~a<<" "<<(a^b)<<endl;

    int i =8; 
    cout<<(++i)<<(i++)<<(--i)<<(i--); 
}