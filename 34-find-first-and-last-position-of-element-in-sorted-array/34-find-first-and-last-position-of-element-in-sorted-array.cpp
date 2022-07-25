class Solution {
private:
    int binSearchFirstPos(const vector<int> &nums, const int target){
        int left = 0, right = nums.size()-1, mid;
        while(left<right){
            mid = left + (right-left)/2;
            if(nums[mid]<target)
                left = mid+1;
            else
                right = mid;
        }
        return nums[left]==target ? left : -1;
    }
    
    int binSearchLastPos(const vector<int> &nums, const int target) {
        int left = 0, right = nums.size()-1, mid;
        while(left<right){
            mid = left + (right-left)/2;
            if(nums[mid]<=target)
                left = mid+1;
            else
                right = mid;
        }
        if(nums[left]==target)
            return left;
        else
            return left-1;
    }
public:
    vector<int> searchRange(const vector<int>& nums, const int target) {
        if(nums.size()==0)
            return vector<int>({-1, -1});
        
        int low = binSearchFirstPos(nums, target);
        if(low==-1)
            return vector<int>({-1, -1});
        
        int high = binSearchLastPos(nums, target);
        return vector<int>({low, high});
    }
};