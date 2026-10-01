#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;


int firstRepeated(vector<int> arr) {

    unordered_set<int> st;

    for(int x : arr) {
        if(st.count(x)) {
            return x;
        }

        st.insert(x);
    }

    return -1;
}

int main(){
    vector<int> arr={1,2,3,3,4};

    int ans = firstRepeated(arr);
    cout << ans;
}