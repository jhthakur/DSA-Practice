class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>zerorow(m,1);
        vector<int>zerocol(n,1);
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
              zerorow[i]=0;
              zerocol[j]=0;
            }}}
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(zerorow[i]==0||zerocol[j]==0){
               matrix[i][j] = 0;
                }}}}};