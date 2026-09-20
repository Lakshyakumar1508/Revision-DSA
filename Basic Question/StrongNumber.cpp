#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int num = 145;
    int sum = 0;

    int temp = num;
    while(temp > 0){
        int digit = temp % 10;
        sum +=fact(digit);
        temp = temp /10;
    }

    if(sum == num){
        cout<<"Strong";
    }else{
        cout<<"No";
    }
}