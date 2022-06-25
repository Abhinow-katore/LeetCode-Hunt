class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int flag = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] > nums[i]){
                if(flag == 1){
                    return false;
                }
                flag++;
                if(i<2 || nums[i-2] <= nums[i])
                    nums[i-1] = nums[i];
                else
                    nums[i] = nums[i-1];
            }
        }
        return true;
    }
};