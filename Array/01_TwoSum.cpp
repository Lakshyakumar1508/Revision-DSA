#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {

    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {

        int sum = arr[i] + arr[j];

        if (sum == target) {
            return {i, j};
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return {};
}

vector<int> twoSum1(vector<int>& arr , int target){
    unordered_map<int,int> mp;

    for(int i = 0 ; i < arr.size() ; i++){
        int complement = target - arr[i];

        if(mp.find(complement) != mp.end()){
            return {mp[complement] , i};
        }
        mp[arr[i]] = i ;
    }
    return {};
}

int main() {

    vector<int> arr = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = twoSum1(arr, target);

    if (!ans.empty()) {
        cout << "Indexes: " << ans[0] << " " << ans[1] << endl;
    }
    else {
        cout << "No pair found" << endl;
    }

    return 0;
}