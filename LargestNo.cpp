/*Finding the largest integer from the user input three integer.
Developed by Jyotirmoy */
#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int a,b,c;
    cout<<"Finding the largest number"<<endl;
    cout<<"Enter first no:";
    cin>>a;
    cout<<"Enter second no:";
    cin>>b;
    cout<<"Enter third no:";
    cin>>c;
    if(a>b && a>c){
        cout<<"The largest number is:"<<a<<endl;
    } else if(b>a && b>c){
        cout<<"The largest number is:"<<b<<endl;
    } else {
        cout<<"The largest number is:"<<c<<endl;
    }
    
}