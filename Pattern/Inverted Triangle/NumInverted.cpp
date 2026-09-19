#include<iostream>
using namespace std;

void numInv(int n){
    for(int i = n ; i > 0 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout << j;
        } cout << endl;
    }
}

void invSame(int n){
    for(int i = 1 ; i <= n; i++){
        for(int j = n ; j > i ; j--){
            cout << i;
        } cout << endl;
    }
}

int main(){
    int n = 5;
    numInv(n);
    invSame(n);
}