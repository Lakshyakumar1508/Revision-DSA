#include <iostream>
#include <climits>
using namespace std;

int main(){
    int Largest = INT_MIN;
    int smallest = INT_MAX;
    int secondLargest = 0;
    

    int num = 3964;

    while ( num > 0){
        int digit = num % 10 ;
        if(digit > Largest){
            secondLargest = Largest;
            Largest = digit; 
        }
        else if(digit < Largest && digit > secondLargest){
            secondLargest = digit;
        }

        if(digit < smallest){
            smallest = digit;
        }
        num = num / 10;
    }

    cout << Largest << endl  << secondLargest << endl << smallest;

}