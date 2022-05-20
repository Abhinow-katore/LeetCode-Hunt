class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {        
      int n=obstacleGrid.size();
      int m= obstacleGrid[0].size();
      int pathcount=1;
      // if obstacles at start and corner end so simply return zero.
      if(obstacleGrid[0][0]==1) return 0;  
      if(obstacleGrid[n-1][m-1]==1) return 0;
      // for row..  
      for(int i=0;i<m;i++){
          if(obstacleGrid[0][i]==1) pathcount=0;
          obstacleGrid[0][i] = pathcount;
      }   
      //this is for col..
      pathcount=1;
      for(int i=1;i<n;i++){
          if(obstacleGrid[i][0]==1) pathcount=0;
          obstacleGrid[i][0] = pathcount;
      }     
          
     for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){ 
            if(obstacleGrid[i][j]==1)obstacleGrid[i][j]=0;
            else obstacleGrid[i][j]=(obstacleGrid[i-1][j]+obstacleGrid[i][j-1])%2147483647;  
        }  
    }  
       
     return obstacleGrid[n-1][m-1];
    }
};