class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> maxi(n);
        deque<int> dq;
        maxi[n-1]=nums[n-1];
        dq.push_back(n-1);
        for(int i=n-2;i>=0;i--){
            if(dq.front()-i>k) dq.pop_front();
            maxi[i]=nums[i]+maxi[dq.front()];
            while(!dq.empty() && maxi[dq.back()]<maxi[i]) dq.pop_back(); 
            dq.push_back(i);
        }
        return maxi[0];
    }
};