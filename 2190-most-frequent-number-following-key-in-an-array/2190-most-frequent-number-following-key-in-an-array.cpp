class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
      unordered_map<int,int> umap; /*num, count*/
      for(int i = 0; i <nums.size()-1; i++){
        if(nums[i]==key){
          umap[nums[i+1]]++;
        }
      }
      
      int maxE=-1;
      int maxEC = 0;
      for(auto it: umap){
        if(it.second > maxEC){
          maxE = it.first;
          maxEC = it.second;
        }
      }
      
      return maxE;
        
    }
};