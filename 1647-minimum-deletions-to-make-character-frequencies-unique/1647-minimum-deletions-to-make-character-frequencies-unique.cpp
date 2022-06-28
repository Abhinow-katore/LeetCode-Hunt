class Solution {
public:
    int minDeletions(string s) {
        vector<int> vect(26,0);
        for(char c: s){
            vect[c-'a']++;
        }
        
        priority_queue<int> pq;
        for(int i=0;i<26;i++){
            if(vect[i]>0){
                pq.push(vect[i]);
            }
        }
        
        int ans=0;
        while(pq.size()>1){
            int top=pq.top();
            pq.pop();
            
            if(top==pq.top()){
                if(top-1>0){
                    pq.push(top-1);
                }
                ans++;
            }
        }
        return ans;
    }
};