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

    int result = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            result = 1;
        }
    }

    if(result == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}