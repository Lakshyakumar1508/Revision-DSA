#include <iostream>
using namespace std;

void alphLeft(int n){
    for(int i = 0 ; i < n + 1; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout << char('A' + j);
        } cout << endl;
    }
}

void alphSame(int n){
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < i + 1; j++){
            cout << char('A' + i);
        } cout << endl;
    }
}

int main(){
    int n = 4;
    alphLeft(n);
    alphSame(n);
}