/*Printing all the integer and square value pf it using while loop.
Developed by Jyotirmoy */
#include <iostream>

using namespace std;
int main() {
    int i;
    cout<<"Enter any integer";
    cin>>i;

    while (i<=20){
        cout<<"Integer: "<<i<<" Square: "<<i*i<<endl;
        i++;
    }

    return 0;
}