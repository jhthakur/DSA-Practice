#include<iostream>
using namespace std;
int LongestComSubstring(string a, string b,int idxa,int idxb){
    if(idxa==a.length()||idxb==b.length()){
        return 0;
    }
    if(a[idxa]==b[idxb]){
        return 1+LongestComSubstring(a,b,idxa+1,idxb+1);
    }
    else {return max(LongestComSubstring(a,b,idxa+1,idxb),LongestComSubstring(a,b,idxa,idxb+1));}
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<LongestComSubstring(a,b,0,0);
}