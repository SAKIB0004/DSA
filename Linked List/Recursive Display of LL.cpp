#include<bits/stdc++.h>
using namespace std;

#define   sp    " "
#define   ln    "\n"


struct Node{
    int data;
    struct Node *next;
}*first;

void CreateLL(int A[],int n){
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Recursive_DisplayLL(struct Node *p){
    if(p){
        Recursive_DisplayLL(p->next);
        cout<<p->data<<sp;
    }
}


int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};

    CreateLL(A, 10);

    Recursive_DisplayLL(first);
}

