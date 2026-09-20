#include <iostream>
using namespace std;

int fibo(int n) {
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

void fibo1(int n)
{
    int a = 0;
    int b = 1;

    for(int i = 0; i < n; i++){
        cout << a << " ";

        int c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n = 7;

    int f = fibo(n);
    int f1 = fibo1(n);

    cout << f <<endl;
    cout << f1 <<endl;

    for (int i = 0; i < n; i++) {
        cout << fibo(i) << " ";
        cout<<fibo1(i)<<" ";
    }


    return 0;
}