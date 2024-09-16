#include<iostream>
#include<string>
using namespace std;

string concatenateStrings(const string& str1, const string& str2){
    string result = str1 + str2;
    return result;
}

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string concatenatedString = concatenateStrings(str1, str2);
    cout<<concatenatedString <<endl;

    return 0;
}