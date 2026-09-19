#include <iostream>
using namespace std;

void rightNum(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1; j < n - i ; j++){
            cout << " ";
        }

        for(int j = 1 ; j <= i ; j++){
            cout <<j;
        }

        cout << endl;
    }
}

void sameRight(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ;  j < n- i ; j++){
            cout <<" ";
        }

        for(int j = 1 ; j <= i ; j++){
            cout << i;
        }

        cout << endl;
    }
}

int main(){
    int n = 5;

    rightNum(n);
    sameRight(n);
}