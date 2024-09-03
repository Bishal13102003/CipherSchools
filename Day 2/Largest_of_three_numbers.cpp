#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter the third number: ";
    cin>>c;

    int max;
    if(a > b && a > c){
        max = a;
    }
    else if(b > a && b > c){
        max = b;
    }
    else{
        max = c;
    }

    cout<<"The largest number is: " <<max;

    return 0;
}