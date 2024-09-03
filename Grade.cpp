#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> grades(5);

    for(int i = 0; i < 5; i++){
        cout<<"Enter grade " <<(i + 1) <<": ";
        cin>>grades[i];
    }

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += grades[i];
    }

    float avg = (float)sum / 5;

    cout<<"The average grade is: " <<avg <<endl;

    return 0;
}