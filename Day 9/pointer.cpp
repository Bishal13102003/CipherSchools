#include<iostream>
using namespace std;

int main(){
    int var;
    cin>>var;

    int* pointer = &var;
    int valueVar = *pointer;

    cout<<var <<endl;
    cout<<valueVar <<endl;

    return 0;
}