class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>alpha(26,0);
        vector<int>ans;
        int j=0;
        int count=0;
        for(int i=0;i<p.size();i++){
            alpha[int(p[i]-'a')]++;
        }
        while(j<s.size()){
            vector<int>temp=alpha;
            int k=j;count=0;
            while(k<s.size()&&temp[int(s[k])-'a']>0){
                temp[s[k]-'a']--;
                count++;
                k++;
                if(count==p.size())ans.push_back(j);
            } j++; }
        return ans;
    }
};




       
  