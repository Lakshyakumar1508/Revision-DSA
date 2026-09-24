#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;

    int left = 0;
    int right = 0;
    int ans = 0;

    while (right < s.length()) {

        if (st.find(s[right]) == st.end()) {
            st.insert(s[right]);

            int len = right - left + 1;

            if (len > ans)
                ans = len;

            right++;
        }
        else {
            st.erase(s[left]);
            left++;
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << lengthOfLongestSubstring(s);

    return 0;
}