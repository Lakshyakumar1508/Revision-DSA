#include <iostream>
using namespace std;

int main(){
    int num = 2374;

    int mul = 1;
    int temp = num;

    while( temp >0){
        int digit = temp % 10;
        mul = mul * digit;
        temp = temp / 10;
    }

    cout << mul;
}