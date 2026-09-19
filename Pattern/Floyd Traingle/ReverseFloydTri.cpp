#include <iostream>
using namespace std;

int main(){
    int n = 4;
    
    /*
    int num = n *(n + 1) / 2 ;
    for(int i = n ; i > 0 ; i--){
        for(int j = 1 ; j <=i ; j++){
            cout <<num;
            num--;
        }

        cout << endl;
    }
    OUTPUT :
    10987
    654
    32
    1
    */

    int num =1;
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++)
            cout << num++ ;

        cout << endl;
    }
    

}

