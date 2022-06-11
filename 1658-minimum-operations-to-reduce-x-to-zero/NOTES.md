class Solution {
public:
int minOperations(vector<int>& nums, int x) {
int left =  0 ;
int right = nums.size()-1;
int count = 0;
while(x>0){
// if(x<nums[left]&&(nums[left]>nums[right])){
//     right--;
//     count++;
//     x=x-nums[right];
//     continue;
// }
//    if(x<nums[right]&&(nums[left]<nums[right])){
//     right--;
//     count++;
//     x=x-nums[right];
//     continue;
// }
if(x>=nums[left]&&(nums[left]>nums[right])){
left++;
count++;
x=x-nums[left];
continue;
}
if(x>=nums[right]&&(nums[left]<nums[right])){
right--;
count++;
x=x-nums[right];
continue;
}
if(x==0)break;
if(x<nums[left] ||x<nums[right]) return -1;
if(max(nums[left],nums[right])>x && min(nums[left],nums[right])>x) return -1;
if(nums[left]-x>0 && nums[left]>nums[right]){right--;count++;x=x-nums[right];continue;}
if(nums[right]-x>0 && nums[left]<nums[right]){left--;count++;x=x-nums[left];continue;}
// if(x<0)break;
}
// if(x<nums[left] ||x<nums[right]) return -1;
return count;
}
};