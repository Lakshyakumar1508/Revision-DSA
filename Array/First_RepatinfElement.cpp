#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int firstRepeat(vector<int>& arr) {
    unordered_set<int> st;

    for (int i = 0; i < arr.size(); i++) {

        if (st.find(arr[i]) != st.end()) {
            return i;
        }

        st.insert(arr[i]);
    }

    return -1;
}