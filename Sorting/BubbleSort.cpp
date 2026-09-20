#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();

    for(int i = 0 ; i < n-1; i++){
        for(int j = 0 ; j < n - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int> arr = { 3,4,2,5,8,1};

    bubbleSort(arr);

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i];
    }
}