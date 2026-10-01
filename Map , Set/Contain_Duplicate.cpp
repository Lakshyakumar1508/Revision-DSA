#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool isDuplicate(vector<int>& arr){
    unordered_set<int>st;

    for(int x : arr){

        if(st.count(x)){
            return true;
        }

        st.insert(x);
    }

    return false;
}

// Remove Duplicate

int removeDuplicate(vector<int>& arr){
    unordered_set<int> st;
    int j = 0;

    for(int x : arr){
        if(st.count(x) == 0){
            st.insert(x);
            arr[j]=x;
            j++;
        }
    }

    return j;

}

// Void return type 
void removeDuplicate(vector<int>& arr) {
    unordered_set<int> st;
    vector<int> result;

    for(int x : arr) {
        if(st.count(x) == 0) {
            st.insert(x);
            result.push_back(x);
        }
    }

    arr = result;
}

int main() {
    vector<int> arr = {2,3,4,5,6,6};

    // Check duplicate
    bool isDup = isDuplicate(arr);

    if(isDup) {
        cout << "Duplicate exists\n";
    } else {
        cout << "No duplicate\n";
    }

    // Remove duplicate
    int n = removeDuplicate(arr);

    cout << "After removing duplicates: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nUnique elements: " << n;

    return 0;
}