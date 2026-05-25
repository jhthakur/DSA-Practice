class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
       
        for(int j=0;j<n;j++){
             int ones=0;
            for(int i=0;i<m;i++){
                ones+=grid[i][j];
            }
            if(ones<m-ones){
                for(int i=0;i<m;i++){
            grid[i][j]=1-grid[i][j];
        }}
        
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int value=1;
            for(int j=n-1;j>=0;j--){
                ans+=value*grid[i][j];
                value*=2;
            }
        }
        return ans;
    }
};