#include<iostream>
using namespace std;

int main(){
    int a =12;
    int b = 18;

    int temp = a;
    int temp2 = b;
    while(temp2 != 0){
        int rem = temp%temp2;
        temp =temp2;
        temp2 = rem;
    }

    cout << temp << endl;

    int LCM = (a * b ) / temp;

    cout << LCM;
}