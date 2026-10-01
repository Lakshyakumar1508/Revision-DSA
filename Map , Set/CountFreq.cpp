#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void countFreq(string s){

    unordered_map<char,int> mp;

    for(char x : s){
        mp[x]++;
    }

    for(auto x : mp){
        cout << x.first << "-> " << x.second <<endl;
    }
}

int main(){
    string s = "Lakshya";

    countFreq(s);
}