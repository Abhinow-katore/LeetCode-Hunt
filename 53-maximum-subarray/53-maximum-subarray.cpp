class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int local=nums[0],global=nums[0];
        for(int i=1;i<nums.size();i++){
            local=max(local+nums[i],nums[i]);
            global=max(global,local);
        }
        return global;
        
    }
};