#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
stack<int> num;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]==' ')continue;
    if(s[i]>='0'&&s[i]<='9'){
        num.push(s[i]-'0'); }
    else{
        int num1=num.top();
        num.pop();
        int num2=num.top();
        num.pop();
        int ans;
        if(s[i]=='*')ans=num1*num2;
        else if(s[i]=='+')ans=num1+num2;
        else if(s[i]=='-')ans=num1-num2;
        else if(s[i]=='/')ans=num1/num2;
        else continue;
        num.push(ans);}
}cout<<num.top();}