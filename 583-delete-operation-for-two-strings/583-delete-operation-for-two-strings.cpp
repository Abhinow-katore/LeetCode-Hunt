class Solution {
public:
    
    int minDistance(string str1, string str2) {
        
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else{
                    if(str1[i - 1] == str2[j - 1]){
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    }
                    else{
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                    }
                }
            }
        }
        
        int lcs = dp[n][m];
        return n + m - 2 * lcs;
    }
};