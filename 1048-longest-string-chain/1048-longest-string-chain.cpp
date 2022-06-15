class Solution {
public:
    bool isChain(string &s1,string &s2){
        if(s2.size() != s1.size()+1) return false;
        int j = 0;
        bool skipFlag = false;
        for(int i=0;i<s2.size();i++){
            if(s2[i] == s1[j]) j++;
            else {
                if(skipFlag) return false;
                skipFlag = true;
            }
        }
        return true;
    }
    int longestStrChain(vector<string>& w) {
        // sorting words for size(), write lambda function on sort() is much better way, someone plz write it on comment
        vector<pair<int,string>> tmp;
        for(auto &word:w) tmp.push_back({word.size(),word});
        sort(tmp.begin(),tmp.end());
        for(int i=0; i<tmp.size(); i++) w[i] = tmp[i].second;
        
        // minimum answer is 1
        int ans = 1;
        vector<int> dp(w.size(),1);
        
        for(int i=0;i<w.size();i++){
            for(int j=i+1;j<w.size();j++){
                if(isChain(w[i],w[j])){
                    dp[j] = max(dp[j], dp[i]+1);
                    ans = max(ans,dp[j]);
                }
            }
        }
        return ans;
    }
};
