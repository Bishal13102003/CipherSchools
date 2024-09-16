#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,50};

    int*ptr = &arr[0];

    int size = arr.size();

    for(int i = 0; i < size; i++){
        cout<<*(ptr + i) <<" ";
    }

    return 0;
}