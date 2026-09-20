#include<iostream>
using namespace std;

int main(){
    int a =48;
    int b = 18;

    while(b != 0){
        int rem = a%b;
        a=b;
        b= rem;
    }

    cout << a;
}