#include<iostream>

using namespace std;
int main(){
    float temp;
    cout<<"Enter temperature: ";
    cin>> temp;
    char unit;
    cout<<"Enter unit of temperature(Celsius as c or Fahrenheit as f):";
    cin>>unit;

    if(unit== 'c'||unit== 'C'){
        cout<<"Temperature "<<temp<<"°C in Fahrenheit: "<<((temp * 9/5) + 32)<<"°F"<<"\n";
    }else if(unit== 'f'||unit== 'F'){
        cout<<"Temperature "<<temp<<"°F in Celsius: "<<((temp-32) * 5/9)<<"°C"<<"\n";
    }

}