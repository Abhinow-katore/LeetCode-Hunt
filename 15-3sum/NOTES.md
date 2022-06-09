{
if(curr==left  curr==right){
break;
}
int flag = 0;
if (nums[left] + nums[curr] + nums[right] > 0) {right--; continue;}
if (nums[left] + nums[curr] + nums[right] < 0) {left++; continue;}
if(nums[left]+ nums[curr] +nums[right]==0){
if(nums[left]==val2 && nums[curr] ==val2 && nums[right]==val3 && nums[left]!=0){
curr++;
continue;
}
flag =1;
cout<<nums[left]<<" "<<nums[curr]<<""<< nums[right]<<"\n";
vector<int> triplet = {nums[left] ,nums[curr] ,nums[right]};
val1=nums[left];
val2 =nums[curr] ;
val3 = nums[right];
res.push_back(triplet);
curr++;
continue;
}
curr++;
}
return res;
}
};
```
----------------------------------------------
class Solution
{
public:
vector<vector<int>> threeSum(vector<int> &nums)
{
// if(nums[0]==0 &&nums[1]==0 &&nums[2]==0)return {{0,0,0}};
//         int c = 0 ;
//         if(nums.size()==3){
//             for(int i = 0 ;i<nums.size();i++){
//                 if(nums[1]==0)c++;
//             }
//         }
//         if(c==3)return {{0,0,0}};
sort(nums.begin(), nums.end());
// vector<int>solve;
vector<vector<int> > res;