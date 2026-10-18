#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
stack<string> val;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]>='0'&&s[i]<='9'){
        val.push(string(1,s[i]));
    }
    else if(s[i]==' ')continue;
    else{
        string ans;
        string val1=val.top();
        val.pop();
        string val2=val.top();
        val.pop();
        char ch=s[i];
        ans+="("+val1+" "+ch+" "+val2+")";
        val.push(ans);
    }
}
cout<<val.top()<<endl;
}