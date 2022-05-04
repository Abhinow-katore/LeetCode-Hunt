class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0 ; 
        int count= 0 ;
        int right = nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right]==k){
                count++;
                left++;
                right--;
                continue;
            }
            if(nums[left]+nums[right]>k){
                right--;
                continue;
            }
            if(nums[left]+nums[right]<k)left++;
        }
        return count;
    }
};