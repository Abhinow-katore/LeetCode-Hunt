class Solution {
public:
    vector<pair<int,int>> direction;
    int solve(vector<vector<int>> &grid,int i,int j){
        if(grid[i][j]==0 || grid[i][j]==2) return 0;
        int n=grid.size(),m=grid[0].size();
        grid[i][j]=2;
        int ans=1;
        for(int k=0;k<4;k++){
            int x=i+direction[k].first;
            int y=j+direction[k].second;
            if(x>=0 && y>=0 && x<n && y<m && grid[x][y]==1){
                ans+=solve(grid,x,y);
            }
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        direction.push_back({1,0});
        direction.push_back({0,1});
        direction.push_back({-1,0});
        direction.push_back({0,-1});
        int area=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]==1)
                    area=max(area,solve(grid,i,j));
        return area;
        
    }
};