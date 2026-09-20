#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){

    vector<int> temp;

    int i = low;
    int j = mid + 1;

    while(i <= mid && j <= high){

        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining left elements
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining right elements
    while(j <= high){
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back
    for(int k = 0; k < temp.size(); k++){
        arr[low + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int low, int high){

    if(low >= high){
        return;
    }

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main(){

    vector<int> arr = {3, 4, 2, 5, 8, 1};

    mergeSort(arr, 0, arr.size() - 1);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}