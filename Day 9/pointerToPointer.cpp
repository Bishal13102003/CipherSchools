#include<iostream>
using namespace std;

int main(){
    int num = 100;

    int* ptr1 = &num;

    int**ptr2 = &ptr1;

    cout<<num <<endl;
    cout<<*ptr1 <<endl;
    cout<<**ptr2 <<endl;

    return 0;
}
