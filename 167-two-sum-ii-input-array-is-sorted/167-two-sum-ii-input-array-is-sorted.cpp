class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = numbers.size()-1;
        vector<int>ans;
        for(int i = 0 ; i<numbers.size(); i++){
            if(numbers[left]+numbers[right] > target){
                right--;
            }
            if(numbers[left]+numbers[right] < target){
                left++;
            }
            if(numbers[left]+numbers[right]== target){

                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }
        return ans;  
    }
};