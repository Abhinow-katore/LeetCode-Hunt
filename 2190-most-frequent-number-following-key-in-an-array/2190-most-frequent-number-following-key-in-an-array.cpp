class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> mp;

    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]==key)
            mp[nums[i+1]]++;    //increase target frequency
    }
    
    int mx = INT_MIN;
    int target = -1;
    for(auto &it: mp){
        if(it.second > mx){         //highest target count
            mx = it.second;
            target = it.first;     //store target(element)
        }
    }
    
    return target;
    }
};