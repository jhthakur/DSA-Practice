#include<iostream>
using namespace std;
 void PrintSeq(int n,int k,int idx,int arr[],int start){
    if(idx==k){
        for(int i=0;i<k;i++){
            cout<<arr[i]<<" ";
        }
    }
    for(int j=start;j<=n;j++){
        arr[idx]=j;
        PrintSeq(n,k,idx+1,arr,j+1);
    }
 }
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k];
    PrintSeq(n,k,0,arr,1);
}