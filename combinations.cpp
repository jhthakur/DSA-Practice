class Solution {
public:
    void combination(vector<int>& candidates,int target,vector<int> ans,vector<vector<int>> &fans,int idx){
     
       if(target==0){
        fans.push_back(ans);
        return;
       }
         if(target<0)return;
        for(int i=idx;i<candidates.size();i++){
            ans.push_back(candidates[i]);
            combination(candidates,target-candidates[i],ans,fans,i);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> fans;
        vector<int> ans;
        combination(candidates,target,ans,fans,0);
        return fans;
    }
};