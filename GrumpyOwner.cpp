class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        int sum=0;
        for(int i=0;i<minutes;i++){
           if(grumpy[i]==1)sum+=customers[i];
        }
        int i=1;
        int j=minutes;
        int maxsum=sum;
        int maxidx=0;
    while(j<customers.size()){
        if(grumpy[j]==1)sum+=customers[j];
        if(grumpy[i-1]==1)sum-=customers[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    for(int i=maxidx;i<maxidx+minutes;i++){
        ans+=customers[i];
    }
    for(int i=0;i<customers.size();i++){
        if(i>=maxidx&&i<maxidx+minutes)continue;
        if(grumpy[i]==0)ans+=customers[i];
    }
    return ans;
    }
};