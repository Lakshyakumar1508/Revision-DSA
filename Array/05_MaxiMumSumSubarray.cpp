#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSum(vector<int> arr) {

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
}

int main() {

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSum(arr);

    return 0;
}