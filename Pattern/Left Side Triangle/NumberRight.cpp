#include <iostream>
using namespace std;


void numRight(int n){
    for(int i = 1 ; i < n + 1; i++){
        for(int j = 1 ; j < i + 1 ; j++){
            cout << j;
        }cout << endl;
    } cout << endl;
}

void sameRight(int n){
    for(int i = 1 ; i < n + 1; i++){
        for(int j = 1 ; j < i + 1 ; j++){
            cout << i;
        }cout << endl;
    } cout << endl;
}

int main(){
    int n = 5;

    numRight(n);
    sameRight(n);
}