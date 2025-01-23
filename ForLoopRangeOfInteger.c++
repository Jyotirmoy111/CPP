/*Printing all the integer from the user input given range of smallest and largest integer.
Developed by Jyotirmoy */
#include <iostream>

using namespace std;
int main() {
    int a,b;
    cout<<"Enter the start number:";
    cin>> a;
    cout<<"Enter the end number:";
    cin>> b;
    for (int i=a; i<b; i++){
        cout<<i<<endl;
    }
    return 0;
}