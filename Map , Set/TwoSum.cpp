#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& arr, int target) {

    unordered_map<int, int> mp;

    for(int i = 0; i < arr.size(); i++) {

        int complement = target - arr[i];

        if(mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}

int main() {
    vector<int> arr = {2,6,5,4,1};
    int t = 5;

    vector<int> ans = twoSum(arr, t);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}