#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n =4;

    int f = fact(n);
    cout << f << endl;

    for(int i = 0 ; i < n ; i++){
        cout << fact(i);
    }
   
}