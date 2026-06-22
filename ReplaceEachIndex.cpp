#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
   int arr[]={5,6,8,10};
   int n=4;
   for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
   }
   float kmin=INT_MIN;
   float kmax=INT_MAX;
   bool flag=true;
   for(int i=0;i<n-1;i++){
    if(arr[i]>=arr[i+1]){
        float t=(arr[i]+arr[i+1])/2.0;
        kmin=max(kmin,t);
    }
    else{float t=(arr[i]+arr[i+1])/2.0;
        kmax=min(kmax,t);}
    if(kmin>=kmax){flag=false;
    break;}
   }
   if(flag==false){cout<<-1;}
   else if(kmin==kmax){
    if(kmin-(int)kmin==0){
        cout<<"Range of k is:"<<kmin;}
        else cout<<-1;
   }
   else{if(kmin-(int)kmin>0){
    kmin=(int)kmin+1;
   }
    cout<<"Range of k is: "<<kmin<<" to"<<(int)kmax;}
}