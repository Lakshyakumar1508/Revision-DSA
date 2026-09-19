#include <iostream>
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

int main() {

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(arr, target);

    if (!ans.empty()) {
        cout << "Indexes: " << ans[0] << " " << ans[1] << endl;
    }
    else {
        cout << "No pair found" << endl;
    }

    return 0;
}