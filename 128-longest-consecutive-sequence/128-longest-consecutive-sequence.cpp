class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        if(n==0)
            return 0;
        int ans = 1;
        int count =1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]==nums[i]+1)
            {
                count++;
                ans= max(count,ans);
            }
            else if(nums[i+1]==nums[i])
            {
                continue;
            }
            else
            {
                count=1;
            }
        }
        return ans;
    }
};