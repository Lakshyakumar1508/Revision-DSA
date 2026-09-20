#include<iostream>
using namespace std;

int main(){
    int n = 8645;

    int temp = n ;
    int sum = 0;
    int cnt=0;

    while(temp > 0){
        int digit = temp%10;
        sum +=digit;
        cnt++;
        temp = temp /10;
    }
    cout << sum << endl;
    cout << cnt;
}