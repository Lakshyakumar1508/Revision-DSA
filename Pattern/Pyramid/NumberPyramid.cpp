#include <iostream>
using namespace std;


void numPyra(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << j;

        cout << endl;
    }
}

void sameNumPyra(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << i;

        cout << endl;
    }
}

int main(){
    int n = 5;
    numPyra(n);
    sameNumPyra(n);
}