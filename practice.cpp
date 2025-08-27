#include <iostream>
using namespace std;
void ToFer();
void ToCel();
int main(){
    int n;
    while (n!=3)
    {   cout<<"1. Convert Celsius to Fahrenheit"<<endl;
        cout<<"2. Convert Fahrenheit to Celsius"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice(1-3): ";
        cin>> n;
        switch(n){
            case 1:ToFer();break;
            case 2:ToCel();break;
            case 3:cout<<"Exiting the program."<<endl;break;
            default:cout<<"Invalid choice. Please try again."<<endl;

        }
    }
    return 0;
}
void ToFer(void){
    float cel, fer;
    cout<<"Enter temprature in Celsius: ";
    cin>> cel;
    fer= (cel*9/5)+32;
    cout<< cel<<" C = "<<fer <<" F"<<endl;
}
void ToCel(void){
    float cel, fer;
    cout<<"Enter temprature in Fahrenheit: ";
    cin>> fer;
    cel= (fer-32)*5/9;
    cout<< fer<<" F = "<<cel <<" C"<<endl;
}