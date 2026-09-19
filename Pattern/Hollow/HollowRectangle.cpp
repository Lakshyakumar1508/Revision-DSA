#include<iostream>
using namespace std;

int main(){
    int len = 5;
    int wid = 4;

    for(int i = 1 ; i <= wid ; i++){
        for(int j = 1 ; j <= len ; j++){
            if(i == 1   || i ==wid || j == 1 || j == len ){
                cout <<"*";
            }else{
                cout <<" ";
            }
        }
        cout << endl;
    }
}