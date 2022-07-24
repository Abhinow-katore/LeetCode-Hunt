class Solution {
public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int h1 = matrix.size()-1;
//         int h2 = matrix.size()-1;
//         int l1 = 0;
//         int l2 = 0;
//         while(l1<h1 && l2<h2){
//             int mid1 = (l1+h1)/2;
//             int mid2 = (l2+h2)/2;
//             if(matrix[mid1][mid2]== target)return true;
//             if(matrix[mid1][mid2]>target){
//                 l1 = mid1+1;
//                 l2 = mid2+1;
//             }
//             if(matrix[mid1][mid2]<target){
//                 h1 = mid1-1;
//                 h2 = mid2-1;
//             }
            
//         }
//         return false;
//     }
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    if (m == 0) return false;
    int n = matrix[0].size();

    int i = 0, j = n - 1;
    while (i < m && j >= 0) {
        if (matrix[i][j] == target)
            return true;
        else if (matrix[i][j] > target) {
            j--;
        } else 
            i++;
    }
    return false;
}
};