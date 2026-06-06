#include<iostream>
using namespace std;
int vowel(string s,int i, int count){
    if(i==s.size()) return count*(count+1)/2;
   
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
    return vowel(s,i+1,count+1);}
    else{
    int ans = count*(count+1)/2;
    return ans + vowel(s,i+1,0);}
}
int main(){
    string s;
    cin>>s;
   cout<<vowel(s,0,0);
}