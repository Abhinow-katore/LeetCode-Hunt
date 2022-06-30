// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         int avg = accumulate(nums.begin(), nums.end(), 0) / nums.size();
//         int diff = 0;
//         cout<<avg;
//         int count = 0 ;
//         for(int i = 0 ; i<nums.size(); i++){
//             if(nums[i]==0)count++;
//             if(nums[i]==avg)continue;
//             diff = diff+ abs(nums[i]-avg);
//         }
//         return diff-count;
//     }
// };

// // 0 0 1 8 6
// // 2 3 3 5 3
class Solution{
    public:
        int minMoves2(vector<int>& nums) {
             sort(nums.begin(), nums.end()); int n = nums.size(), res = 0;
            for (int i = 0; i < n/2; ++i) res += (nums[n-1-i]-nums[i]);
            return res;
    }
};