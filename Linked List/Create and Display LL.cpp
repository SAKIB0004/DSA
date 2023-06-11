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

void DisplayLL(struct Node *p){
    //p=first;
    while(p){
        cout<<p->data<<sp;
        p=p->next;
    }
    cout<<ln;
}

int main(){
    int A[10]={1,3,4,5,6,10,15,23,26,123};
    
    CreateLL(A, 10);
    
    DisplayLL(first);
}

