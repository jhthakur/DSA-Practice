class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans(k);
        int n=arr.size();
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans[i]=arr[i];
            }return ans;
        }
        else if(x>arr[n-1]){
            int i=n-k;int j=0;
            while(j<k){
                ans[j]=arr[i];
                i++;
                j++;
            }return ans;
        }
        int lo=0;
        int hi=n-1;
        int t=0;
        bool flag=false;
        int mid=-1;
        while(lo<=hi){
             mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                ans[t]=arr[mid];
                t++;
                flag=true;
                break;
            }
            else if(arr[mid]>x)hi=mid-1;
            else lo=mid+1;
        }
        int lb=hi;
        int ub=lo;
        if(flag==true){
            lb=mid-1;
            ub=mid+1;
        }
   while(t<k){
    if(lb<0){
            ans[t++]=arr[ub++];
        }
    else if(ub>n-1){
            ans[t++]=arr[lb--];
    }else{ int a;
        int b;
        a=abs(x-arr[lb]);
        b=abs(x-arr[ub]);
        if(a<=b){ans[t]=arr[lb];
        lb--;
        t++;}
        else{ans[t]=arr[ub];
        ub++;
        t++;}}
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};