class Solution {
public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
       int r = grid.size();
       int m = grid[0].size();
       int ans = 0;
       for(int i = 0;i < r; i++){
           for(int j = 0;j < m; j++){
               if(grid[i][j] == 1){
                   ans+=4;
                   if(i > 0 && j > 0 && grid[i-1][j] == 1) ans--;
                   if(i > 0 && j > 0 && grid[i+1][j] == 1) ans--;
                   if(i > 0 && j > 0 && grid[i][j+1] == 1) ans--;
                   if(i > 0 && j > 0 && grid[i][j-1] == 1) ans--;
               }
           }
       }
       return ans;
    }
     

};