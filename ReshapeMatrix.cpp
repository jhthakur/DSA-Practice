class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(r,vector<int>(c));
        if(r*c!=m*n)return mat;
        int p=0;int q=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(q<c){ans[p][q]=mat[i][j];
                       q++;}
                if(q==c){p++;
                      q=0;}
            }
        }
        return ans;
    }      
};