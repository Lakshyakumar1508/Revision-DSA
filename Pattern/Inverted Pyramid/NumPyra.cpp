#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = n ; i >= 0 ; i--){
        for(int j = 0 ; j < n- i ; j++){
            cout <<" ";
        }
        for(int j = 1 ; j <= 2 * i + 1 ; j++){
            cout << j;
        }
        cout << endl;
    }

}