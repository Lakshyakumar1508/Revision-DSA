#include <iostream>
using namespace std;

int main(){
    int num = 1221;
    int temp = num;
    int rev = 0;

    while(temp > 0){
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10; 
    }
    cout << rev << endl;
    cout << num << endl;

    if(rev == num){
        cout <<"Palindrome";
    }else{
        cout<<"Non palindrome";
    }
}