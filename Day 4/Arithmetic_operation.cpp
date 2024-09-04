#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter first integer: ";
    cin>>x;

    cout<<"Enter second integer: ";
    cin>>y;

    cout<<"Addition: " <<(x + y) <<endl;
    cout<<"Subtraction: " <<(x - y) <<endl;
    cout<<"Multiplication: " <<(x * y) <<endl;
    if(y >= 1){
        cout<<"Division: " <<(x / y) <<endl;
    }
    cout<<"Modulus: " <<(x % y) <<endl;

    return 0;
}