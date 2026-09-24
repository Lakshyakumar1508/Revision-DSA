#include <iostream>
using namespace std;

int main(){
    // int num = 153;

    // int temp = num;
    // int cnt = 0 ;
    // while(temp > 0){
    //     cnt++;
    //     temp = temp/10;
    // }

    // int temp2 = num;

    // int sum = 0 ;
    // while(temp2 > 0){
    //     int digit = temp2 % 10;
    //     int power =1 ;
    //     for(int i = 0 ; i < cnt ; i++){
    //         power *=digit;
    //     }

    //     sum+=power;
    //     temp2 = temp2/10;
    // }

    

    int num = 153;

    int temp = num ;

    int cnt = 0;
    int power = 1;

    int sum = 0 ;

    while(temp > 0){
        int digit = temp % 10;
        cnt++;

        for(int i = 0 ; i < cnt ; i++){
            power *= digit;
        }

        sum+=power;
        temp = temp /10;
    }

    if(sum == num){
        cout<<"Armstrong";
    }else{
        cout<<"No";
    }

}