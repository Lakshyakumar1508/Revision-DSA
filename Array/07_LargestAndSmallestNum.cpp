#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<int, int> largestAndSmallest(vector<int> arr) {

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {

        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    return {maxi, mini};
}

int main() {

    vector<int> arr = {5, 2, 9, 1, 7};

    pair<int, int> ans = largestAndSmallest(arr);

    cout << "Largest: " << ans.first << endl;
    cout << "Smallest: " << ans.second << endl;

    return 0;
}