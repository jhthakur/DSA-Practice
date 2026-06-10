#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subarray(int arr[],int n,int i,vector<int> ans,vector<vector<int>>& fans){
if(i==n){
    if(!ans.empty()){
        fans.push_back(ans);
    }
    return;
}
subarray(arr,n,i+1,ans,fans);
if(ans.size()==0 || arr[i]>=ans[ans.size()-1]){
ans.push_back(arr[i]);
subarray(arr,n,i+1,ans,fans);
}
}
int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    vector<vector<int>> fans;
    subarray(arr,n,0,ans,fans);
     for(int i=0;i<fans.size();i++){
         for(int j=0;j<fans[i].size();j++){
             cout<<fans[i][j]<<" ";
         }cout<<endl;}return 0;}