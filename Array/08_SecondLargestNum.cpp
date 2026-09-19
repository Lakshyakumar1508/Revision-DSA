#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> arr) {

    int maxi = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] > maxi) {
            secondMax = maxi;
            maxi = arr[i];
        }
        else if (arr[i] < maxi && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {

    vector<int> arr = {10, 5, 8, 20, 15};

    cout << secondLargest(arr);

    return 0;
}