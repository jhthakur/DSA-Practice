class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string ans="";
        int l=min(strs[0].size(),strs[strs.size()-1].size());
        for(int i=0;i<l;i++){
        if(strs[0][i]==strs[n-1][i]){ans.push_back(strs[0][i]);}
        else{break;}
        }
    return ans;class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string ans="";
        int l=min(strs[0].size(),strs[strs.size()-1].size());
        for(int i=0;i<l;i++){
        if(strs[0][i]==strs[n-1][i]){ans.push_back(strs[0][i]);}
        else{break;}
        }
    return ans;