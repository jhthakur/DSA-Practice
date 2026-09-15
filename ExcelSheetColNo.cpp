class Solution {
public:
    int place(int n){
        int prod=1;
        for(int i=0;i<n;i++){
            prod*=26;
        }
        return prod;
    }
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int sum=0;
    for(int i=0;i<n;i++){
        sum+=place(n-i-1)*(columnTitle[i]-'A'+1);
    }
     return sum;   
    }
};