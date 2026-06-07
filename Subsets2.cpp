#include <iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,int i,vector<int> ans,vector<vector<int>>& finalans,bool flag){
if(i==n){
    finalans.push_back(ans);
    return;
}
if(i>0 && arr[i]==arr[i-1]){
    if(flag==true){subset(arr,n,i+1,ans,finalans,true);
ans.push_back(arr[i]);
subset(arr,n,i+1,ans,finalans,false);}}
else {if(flag==true){subset(arr,n,i+1,ans,finalans,true);
ans.push_back(arr[i]);
subset(arr,n,i+1,ans,finalans,true);}
}
}
int main() {
	int n;
    cin>>n;
    int arr[n];
    vector<int> ans;
    vector<vector<int>> finalans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subset(arr,n,0,ans,finalans,true);
    for(int i=0;i<finalans.size();i++){
        for(int j=0;j<finalans[i].size();j++){
            cout<<finalans[i][j]<<" ";
        }cout<<endl;
    }
	return 0;
}