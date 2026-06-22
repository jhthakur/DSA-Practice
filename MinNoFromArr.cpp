#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,3,8};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    string nums1="";
    string nums2="";
    cout<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(i%2==0){
            nums1+=char(arr[i]+'0');
        }
        else{
            nums2+=char(arr[i]+'0');
        }
    }
    cout<<nums1<<" "<<nums2;
}