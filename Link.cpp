#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
};
int main(){
node a(10);
node b(30);
node c(20);
a*next=&b;
b*next=&c;
c*next=NULL;
node temp=a;
while(1){
    cout<<temp.val<<"\t";
    if(temp.next==NULL)break;
    temp=*temp.next;

}
}