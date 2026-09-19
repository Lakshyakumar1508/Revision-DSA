#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Array is Sorted
int removeDuplicates(vector<int>& arr) {

    if (arr.empty())
        return 0;

    int i = 0;

    for (int j = 1; j < arr.size(); j++) {

        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

// Array is Unsorted
vector<int> removeDup(vector<int>& arr) {

    unordered_set<int> seen;
    vector<int> ans;

    for (int x : arr) {

        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            ans.push_back(x);
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {4, 2, 4, 1, 2, 3, 1};

    vector<int> ans = removeDup(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}