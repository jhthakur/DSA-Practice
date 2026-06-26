#include<iostream>
using namespace std;
int partitionSort(int arr[],int si,int ei){
int pivot=arr[(si+ei)/2];
int count=0;
for(int i=si;i<=ei;i++){
    if(i==(si+ei)/2)continue;
    if(arr[i]<=pivot)count++;
}
int pivotidx = count+si;
swap(arr[(si+ei)/2],arr[pivotidx]);
int i=si;
int j=ei;
while(i<pivotidx && j>pivotidx){
    if(arr[i]<=pivot)i++;
    else if(arr[j]>pivot)j--;
    else swap(arr[i++],arr[j--]);
}
return pivotidx;
}
int KthSmallestEle(int arr[],int si,int ei,int k){
   int pi=partitionSort(arr,si,ei);
   if(pi+1==k)return arr[pi];
   else if(pi+1<k) return KthSmallestEle(arr,pi+1,ei,k);
   else return KthSmallestEle(arr,si,pi-1,k);
}
int main(){
    int arr[]={4,6,12,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=2;
    cout<<KthSmallestEle(arr,0,n-1,k);
}