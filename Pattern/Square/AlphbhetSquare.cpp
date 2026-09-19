#include <iostream>
using namespace std;

void AlphSquare(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << char('A' + j);
        }cout << endl;
    }
}

void SameAlph(int n){
    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < n ; j++){
            cout << char('A' + i);
        } cout << endl;
    }
}

int main(){
    int n = 4;

    AlphSquare(n);
    cout << endl;
    SameAlph(n);
}