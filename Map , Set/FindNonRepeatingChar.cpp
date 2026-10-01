#include <iostream>
#include <map>
#include <string>
using namespace std;


void nonRepeatingChar(string s){
    map<char,int> mp;

    for(char x : s){
        mp[x]++;
    }

    for(auto x : mp){
        if(x.second == 1){
            cout << x.first << endl;
        }
    }
}


char firstNonRepeatingChar(string s){
    map<char,int> mp;

    for(char x : s){
        mp[x]++;
    }

    for(char x : s){
        if(mp[x]== 1){
            return x;
        }
    }
    return '-';
}

int main(){
    string s = "Lakshya";

    nonRepeatingChar(s);

    cout << endl;

    char ans =firstNonRepeatingChar(s);
    cout << ans;
}