#include <iostream>
using namespace std;

void alphRight(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout <<" ";
        }

        for(int j =0 ; j < i ; j++){
            cout << char('A' + j);
        }

        cout << endl;
    }
}

void alphSame(int n){
    for(int i = 0 ; i <n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            cout << " ";
        }

        for(int j = 0 ; j <= i ; j++){
            cout << char('A' + i);
        }

        cout << endl;
    }
}



int main(){
    int n = 5;

    alphRight(n);
    alphSame(n);
}