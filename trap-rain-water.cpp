class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int volume = 0;
        vector<int> a(n);
        vector<int> b(n);
        int max=-1;
        for(int i=0;i<n;i++){
            a[i]=max;
        if(height[i]>max)max=height[i];
        }
        max=-1;
        for(int i=n-1;i>=0;i--){
            if(max<a[i])a[i]=max;

            //b[i]=min(a[i],max);
        if(height[i]>max)max=height[i];
        }
        for(int i=0;i<n;i++){
            if(height[i]<a[i])volume+=a[i]-height[i];
        }
        return volume;
    }
};