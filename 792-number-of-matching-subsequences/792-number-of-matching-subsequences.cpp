class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<string,int>mp;
        for(auto&it:words)mp[it]++;//  duplicates remove
        int cnt=0;
        for(auto&it:mp){
            int k=0;
            for(int j=0;j<s.size()&&k<it.first.size();j++)
                if(s[j]==it.first[k])k++;
            if(k==it.first.size())cnt+=it.second;//  frequency sum of  word
        }
        return cnt;
    }
};