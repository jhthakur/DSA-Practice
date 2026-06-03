#include<iostream>
#include<vector>
using namespace std;
vector<int> convert(string s,int i,vector<int> &v){
    if(i==s.size())return v;
    char ch;
    ch=s[i];
    v.push_back(ch-'0');
    convert(s,i+1,v);
}
int main(){
    string s;
        cin>>s;
        vector<int> v;
    convert(s,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}w