#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

bool isPalindrome(const string& str){
    string cleanedStr;

    for(char ch:str){
        if(isalnum(ch)){
            cleanedStr += tolower(ch);
        }
    }

    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return cleanedStr == reversedStr;
}

int main(){
    string test1 = "A man, a plan , a canal, Panama";

    cout<<isPalindrome(test1) <<endl;

    return 0;
}