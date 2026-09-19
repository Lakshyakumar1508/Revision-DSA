#include <iostream>
#include <vector>
using namespace std;

void movesZero(vector<int>& arr) {
    int i = 0;

    for (int j = 0; j < arr.size(); j++) {
        if (arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main() {

    vector<int> arr = {0, 2, 0, 3, 4, 5};

    movesZero(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}