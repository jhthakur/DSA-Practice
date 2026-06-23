#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>&arr,vector<int>&brr,vector<int>&res){
    int i=0,j=0,k=0;
    while(i<arr.size()&&j<brr.size()){
        if(arr[i]<=brr[j]){
            res[k++]=arr[i++];
        }
        else{
            res[k++]=brr[j++];}}

            while(i<arr.size()){
                res[k++]=arr[i++];}
        
            while(j<brr.size()){
                res[k++]=brr[j++];}}
void mergesort(vector<int>&v){
    int n=v.size();
if(n==1) return;
int n1=n/2,n2=n-n/2;
vector<int>arr(n1),brr(n2);
for(int i=0;i<n1;i++){
    arr[i]=v[i];}
for(int i=0;i<n2;i++){
    brr[i]=v[i+n1];}
mergesort(arr);
mergesort(brr);
merge(arr,brr,v);
}
int main(){
    int a[]={2,5,3,9,4};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v(a,a+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";}
    cout<<endl;
    mergesort(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";}
}