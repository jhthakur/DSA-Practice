#include<iostream>
using namespace std;
void seclargest(string s,int i,int largest,int second){
if(i==s.size())cout<<(char)second;
char ch=s[i];
if(ch>largest){
    largest=ch;
    second=largest;
}
if(ch>second && ch!=largest){
    second=ch;
}
seclargest(s,i+1,largest,second);
}
int main(){
    string s="25479";
    int largest='\0';
    int second='\0';
    seclargest(s,0,largest,second);
}