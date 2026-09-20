#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr){
    for(int i = 0 ; i < arr.size() ; i++){
        int curr = arr[i];
        int prev = i - 1 ;

        while(prev >= 0 && arr[prev ] > curr){
            arr[prev+1]  =arr[prev];
            prev--;
        }
 
        arr[prev+1] = curr;
    }
}

int main(){
    vector<int> arr = { 3,4,2,5,8,1};

    insertionSort(arr);

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i];
    }
}