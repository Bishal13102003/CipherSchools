#include<iostream>
#include<string>
using namespace std;

int countCharacter(const string& str, char ch){
    int count = 0;
    for(char c:str){
        if(c == ch){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    getline(cin, str);

    char character;
    cin>>character;

    int count = countCharacter(str, character);
    cout<<count;

    return 0;
}