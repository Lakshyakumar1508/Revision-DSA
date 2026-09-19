#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int>& arr, int k) {

    int n = arr.size();

    if (n == 0)
        return;

    k = k % n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    rotateArray(arr, 2);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}