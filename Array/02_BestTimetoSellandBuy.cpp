#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bestTime(vector<int> arr) {

    int res = 0;
    int minDay = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        minDay = min(minDay, arr[i]);

        res = max(res, arr[i] - minDay);
    }

    return res;
}

int bestTimeMultiple(vector<int> arr) {

    int res = 0;

    for (int i = 0; i < arr.size() - 1; i++) {

        if (arr[i] < arr[i + 1]) {
            res += arr[i + 1] - arr[i];
        }
    }

    return res;
}

int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Single Transaction: "
         << bestTime(prices) << endl;

    cout << "Multiple Transactions: "
         << bestTimeMultiple(prices) << endl;

    return 0;
}