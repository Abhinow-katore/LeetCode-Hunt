// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         // int ans[matrix.size()][matrix[0].size()]; 
//     vector<vector<int>> ans(matrix[0].size(), vector<int> (matrix.size(), 0));
//       for(int i = 0 ; i<matrix.size(); i++){
//           for(int j= 0 ; j<matrix[0].size(); j++){
//               ans[j][i] = matrix[i][j];
//           }
//       }  
//     return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        
        vector<vector<int>> ans(C, vector<int> (R,0));
        
        for (int i=0; i<R; i++) {
            for(int j=0; j<C; j++) {
                ans[j][i] = matrix[i][j];    
            }
        }
        
        return ans;
    }
};