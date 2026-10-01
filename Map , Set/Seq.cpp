// Level 4 — Challenge

// Q10. Longest Consecutive Sequence

// arr = [100, 4, 200, 1, 3, 2]

// Output:

// 4

// Because:

// 1 → 2 → 3 → 4


int longestSeq(vector<int>& arr){
    unordered_map<int,int>st;

    for(int x: arr){
        mp[arr[i]] = i;
    }

    int cnt = 0 ; 
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] + 1== arr[i + 1] ){
            cnt++;
        }
    }

    return cnt;
}