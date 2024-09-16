#include<iostream>
#include<string>
using namespace std;

int stringLength(const string& str){
    int length = str.size();
    return length;
}

int main(){
    string str1;
    getline(cin, str1);

    int len = stringLength(str1);
    cout<<len <<endl;

    return 0;
}