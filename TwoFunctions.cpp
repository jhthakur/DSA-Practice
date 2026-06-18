#include<iostream>
using namespace std;
 int A[]={10,25};
 int B[]={20,30};
 int result[5];
 int n=2;
 int m=2;
 void solve(int i,int j,int k,bool pickA,int last){
    if(pickA){
        for(int x=i;x<n;x++){
            if(A[x]>last){
                result[k]=A[x];
                solve(x+1,j,k+1,false,A[x]);
            }
        }
    }
    else {
        for(int y=j;y<m;y++){
            if(B[y]>last){
                result[k]=B[y];
                for(int x=0;x<=k;x++){
                    cout<<result[x]<<" ";
                   // cout<<"\n";
                }solve(i,y+1,k+1,true,B[y]);
            }
        }
    }
 }
int main(){
    solve(0,0,0,true,-1);
}