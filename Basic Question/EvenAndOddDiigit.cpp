#include <iostream>
using namespace std;

int main(){
    int num = 45324;

    int temp = num;

    int Evencnt = 0 ;
    int Oddcnt = 0 ;

    while( temp > 0){
        int digit = temp % 10;
        if(digit % 2 == 0){
            Evencnt++;
        }else{
            Oddcnt++;
        }
        temp = temp /10;
    }

    cout << Evencnt << endl << Oddcnt;

}