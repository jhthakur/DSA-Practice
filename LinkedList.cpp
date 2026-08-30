#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
};
int main(){
    node a;
    a.val=10;
    node b;
    b.val=30;
    node c;
    c.val=40;
    next*a=&b;
    next*b=&c;
    next*c=NULL;
}