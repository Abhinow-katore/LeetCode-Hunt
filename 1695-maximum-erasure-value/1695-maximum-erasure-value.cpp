class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        //maximum sum subarray with all unique elements
        
        //find all subarrays with unique elements
        vector<bool> mark(10001,false); //nums[i]<=10^4
        int ans=0,sum=0;
        
        int j;
        for(int i = 0, j = 0;i<nums.size();i++)
        {
           while(mark[nums[i]])
           {
               mark[nums[j]]=false;
               sum-=nums[j];
               j++;
           }
            mark[nums[i]]=true;
            sum+=nums[i];
            ans=max(ans,sum);
        }
        
        return ans;
    }
};