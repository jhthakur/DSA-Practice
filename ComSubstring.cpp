#include<iostream>
using namespace std;
int LongestComSubstring(string a, string b,int idxa,int idxb,int count){
    if(idxa==a.length()||idxb==b.length()){
        return count;
    }int ans=count;
    int maxx=-1;
    if(a[idxa]==b[idxb]){
        return LongestComSubstring(a,b,idxa+1,idxb+1,count+1);
    }
    else {maxx= max(LongestComSubstring(a,b,idxa+1,idxb,0),LongestComSubstring(a,b,idxa,idxb+1,0));
    return maxx;}
    return max(ans,maxx);
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<LongestComSubstring(a,b,0,0,0);
}
