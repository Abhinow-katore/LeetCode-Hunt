class Solution {
    void dfs(int i, int n, vector<string>& board, int l, int c, int r, vector<vector<string>>& res) {
        if (i == n) {
            res.emplace_back(board); //insert a new element into the vector container
            return;
        }
        
        l <<= 1, r >>= 1;
        int mask = l | c | r;
        for (int j = 0; j < n; j++) {
            if ((mask & (1 << j)) == 0) {
                string row = string(j, '.') + string(1, 'Q') + string(n-1-j, '.');
                board.emplace_back(row); //insert a new element into the vector container
                int nl = l | (1 << j);
                int nc = c | (1 << j);
                int nr = r | (1 << j);
                dfs(i+1, n, board, nl, nc, nr, res);
                board.pop_back();
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board;
        dfs(0, n, board, 0, 0, 0, res);
        return res;
    }
};