#include <iostream>
using namespace std;

void sameNum(int n){
    for(int i = 1 ; i < n + 1; i++){
        for(int j = 0 ; j < n ; j++){
            cout << i ;
        }cout << endl;
    }

    cout << endl;
}


void numSqu(int n){
    for(int i = 1 ; i < n + 1 ; i++){
        for(int j = 1 ; j < n + 1 ; j++){
            cout << j ;
        }cout << endl;
    }

    cout << endl;
}

int main(){
    int n = 5;

    sameNum(n);
    numSqu(n);
}