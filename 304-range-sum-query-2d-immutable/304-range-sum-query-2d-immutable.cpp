class NumMatrix {
public:
    vector<vector<int>> sum;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        sum = vector<vector<int>>(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            sum[i][0] = matrix[i][0];
            for(int j=1;j<m;j++){
                sum[i][j] = sum[i][j-1]+matrix[i][j];
            }
        } 
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0;
        for(int i=row1;i<=row2;i++){
            if(col1>0){
                ans += (sum[i][col2]-sum[i][col1-1]);
            }
            else{
                ans += (sum[i][col2]);
            }
        }
        return ans;
    }
};
/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

// 1,1 1,2
// 2,1 2,2