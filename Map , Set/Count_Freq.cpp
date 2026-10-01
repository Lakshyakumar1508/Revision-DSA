#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void countFreq(vector<int>& arr){

    unordered_map<int,int> mp;

    for(int x: arr){
        mp[x]++;
    }

    for(auto x:mp){
        cout << x.first <<" -> "<<x.second << endl;
    }
}

int maxOcc(vector<int>& arr){
    unordered_map<int,int> mp;

    for(int x : arr){
        mp[x]++;
    }

    int maxFreq = 0;
    int ans = 0;

    for(auto x : mp){
        if(x.second > maxFreq){
            maxFreq= x.second;
            ans = x.first;
        }
    }

    return ans;
}


int main(){
    vector<int> arr= {2,3,2,2,3,4,5,5};

    countFreq(arr);
    int ans = maxOcc(arr);
    cout << ans;
}