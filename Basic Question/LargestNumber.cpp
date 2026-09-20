#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 23;

    if( a < b){
        cout << "Largest Number is "<< b;
    } else{
        cout<<"Largest Number is " << a;
    }

    cout << endl;
    int c = 45;

    if (a >= b && a >= c) {
        cout << "Largest Number is " << a;
    }
    else if (b >= a && b >= c) {
        cout << "Largest Number is " << b;
    }
    else {
        cout << "Largest Number is " << c;
    }

    return 0;
}