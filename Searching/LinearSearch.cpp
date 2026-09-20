#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector<int>& arr , int target){
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {23,56,32,15};
    int target = 8;

    int ans= linearSearch(arr,target);
    cout << ans;
}