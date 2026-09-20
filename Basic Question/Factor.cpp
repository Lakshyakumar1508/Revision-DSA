#include <iostream>
using namespace std;


void factor(int n){
    
    for(int i = 1 ; i < n ; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

void factorSum( int n){
    int sum = 0;

    for(int i = 1 ; i < n ; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout << sum  << endl;
}

bool isPerfectNum(int n){
    int sum = 0;

    for(int i = 1 ; i < n ; i++){
        if(n % i == 0){
            sum += i ;
        }
    }
    if(sum == n){
        return  true;
    }else{
        return  false;
    }
}

int main(){
    int num = 28;

    factor(num);
    factorSum(num);

    if(isPerfectNum(num)){
        cout << "True";
    }else{
        cout << "False";
    }
}