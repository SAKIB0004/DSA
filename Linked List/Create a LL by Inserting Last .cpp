#include<bits/stdc++.h>
using namespace std;

#define   sp    " "
#define   ln    "\n"


struct Node{
    int data;
    struct Node *next;
}*first, *last;

void DisplayLL(struct Node *p){
    while(p){
        cout<<p->data<<sp;
        p=p->next;
    }
    cout<<ln;
}

void InsertLast(int x){
    struct Node *t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL) first=last=t;
    else{
        last->next = t;
        last = t;
    }
}
int main(){

    InsertLast(1);
    InsertLast(2);
    InsertLast(3);
    DisplayLL(first);
}
