#include<iostream>
using namespace std;
int partitionIndex(int arr[],int si,int ei){
    int pivot=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivot)count++;
    }
    int pivotIndex=si+count;
    swap(arr[si],arr[pivotIndex]);
    int i=si,j=ei;
    while(i<pivotIndex&&j>pivotIndex){
        if(arr[i]<=pivotIndex)i++;
        else if(arr[j]>pivotIndex)j--;
        else swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partitionIndex(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
int arr[]={5,3,8,0,6};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}