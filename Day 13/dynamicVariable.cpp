#include<iostream>
using namespace std;

int main(){
    int* num = new int;

    *num = 40;

    cout<<"Address: " <<num <<endl;

    cout<<"Value: " <<*num <<endl;

    return 0;
}