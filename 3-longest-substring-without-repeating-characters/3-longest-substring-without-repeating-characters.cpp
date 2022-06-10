class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j, ans = 0, n = s.size(), A[256] = {0};
        for(j=0; j<n; j++) {
            i = max(i, A[s[j]]);
            ans = max(ans, j-i+1);
            A[s[j]] = j+1;
        }
        return ans;
    }
};