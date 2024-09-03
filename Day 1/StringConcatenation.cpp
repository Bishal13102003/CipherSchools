#include<iostream>
using namespace std;

int main(){
    string a;
    cout<<"Enter the first string: ";
    cin>>a;

    string b;
    cout<<"Enter the second string: ";
    cin>>b;

    string concatenatedString = a + b;
    
    cout<<concatenatedString <<endl;
    
    return 0;
}