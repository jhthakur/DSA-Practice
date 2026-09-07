class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>alpha(26,0);
        int j=0;
        int count=0;
        for(int i=0;i<s1.size();i++){
            alpha[int(s1[i]-'a')]++;
        }
        while(j<s2.size()){
            vector<int>temp=alpha;
            int k=j;count=0;
            while(k<s2.size()&&temp[int(s2[k])-'a']>0){
                temp[s2[k]-'a']--;
                count++;
                k++;
                if(count==s1.size())return true;
            } j++; }
        return false;
    }
};