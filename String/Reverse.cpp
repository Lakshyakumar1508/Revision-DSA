#include <iostream>
#include <string>
using namespace std;

string reverse(string s){

    int i = 0;
    int j = s.size() - 1;

    while(i < j){
        swap(s[i], s[j]);

        i++;
        j--;
    }

    return s;
}

int main(){

    string s = "Lakshya";

    string rev = reverse(s);

    for(char x : rev){
        cout << x;
    }
}