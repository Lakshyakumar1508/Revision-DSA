#include <iostream>
#include <vector>
using namespace std;

void swapAlt(vector<int>& arr) {

    for (int i = 0; i < arr.size() - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    swapAlt(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}