#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProd(vector<int> arr){
    int maxi= arr[0];
    int mini= arr[0];

    int maxProd = arr[0];

    for(int i = 0 ; i < arr.size() ; i++){
        int tempMax = max({arr[i], maxi*arr[i] , mini*arr[i]});
        int tempMin = min({arr[i], maxi*arr[i] , mini*arr[i]});

        maxi = tempMax;
        mini = tempMin;

        maxProd = max(maxProd,maxi);
    }
    return maxProd;
}


int main() {

    vector<int> arr = {2, 3, -2, 4};

    cout << "Maximum Product: " << maxProd(arr) << endl;

    return 0;
}