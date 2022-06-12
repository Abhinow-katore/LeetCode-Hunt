class Solution {
public:
    vector<int> minOperations(string boxes) {
        int count = 0;
        int val = 0;
        vector<int>arr;
        for(int i = 0 ; i<boxes.length(); i++){
            // if(boxes[i]=='1'){count++;val  = i + 1 +val;}
            if(boxes[i]=='1'){
                arr.push_back(i+1);
            }
        }
        
            cout<<count<<" "<<val<<"\n";
        // vector<int>vec;
        // for(int i = 0 ; i<boxes.length() ; i++){
        //     vec.push_back(abs(count*(i+1)-val));
        // }
        vector<int>ans;
        
        for(int i = 0 ; i<boxes.length() ; i++){
            int submit = 0 ;
            for(int j = 0 ; j<arr.size();j++){
                submit = submit + abs(i+1-arr[j]);
            }
            ans.push_back(submit);
        }
        
        return ans;
    }
};