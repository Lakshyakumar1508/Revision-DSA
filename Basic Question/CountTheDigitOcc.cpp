#include<iostream>
using namespace std;

int main(){
    int num = 122348293;
    int target = 2;

    int temp = num;
    int cnt = 0;
    while(temp > 0){
        int digit = temp % 10;
        if(digit == target){
            cnt++;
        }
        temp = temp / 10;
    }

    cout << cnt;
}