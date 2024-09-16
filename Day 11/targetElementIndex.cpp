#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    int index = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            index = i;
        }
    }

    if(index == -1){
        cout<<"Output: " <<-1 <<endl;
    }
    else{
        cout<<"Output: " <<(index + 1) <<endl;
    }

    return 0;
}