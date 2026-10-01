#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int commonElement(vector<int>& arr, vector<int>& prr) {

    unordered_map<int, int> mp;

    for(int x : arr) {
        mp[x]++;
    }

    for(int x : prr) {
        if(mp.find(x) != mp.end()) {
            return x;
        }
    }

    return -1;
}