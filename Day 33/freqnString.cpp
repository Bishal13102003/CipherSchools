#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

string frequencySort(const string &s){
    unordered_map<char, int> freqMap;

    for(char c : s){
        freqMap[c]++;
    }

    vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());

    sort(freqVec.begin(), freqVec.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
        return a.second>b.second;
    });

    string result;
    for(const auto&p : freqVec){
        result += string(p.second, p.first);
    }

    return result;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);

    string output = frequencySort(s);
    cout<<"Sorted string: " <<output <<endl;

    return 0;
}