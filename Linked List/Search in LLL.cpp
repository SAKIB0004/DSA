#include<bits/stdc++.h>
using namespace std;

#define   sp    " "
#define   ln    "\n"


struct Node{
    int data;
    struct Node *next;
}*first;


//Create a linked list from an array
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

//Brute forces Approach
struct Node * Search(struct Node  *p,int key){
    while(p){
        if(key==p->data) return p;
        p=p->next;
    }
    return NULL;
}

struct Node *LSearch(struct Node *p,int key){
    struct Node *q;
    while(p){
        if(key==p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
//Recursive Approach
struct Node *RSearch(struct Node *p,int key){
    if(!p) return NULL;
    if(key==p->data) return p;
    return RSearch(p->next,key);
}

int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};

    CreateLL(A, 10);

    struct Node *t,*t1,*t2;
    t=Search(first, 20);
    if(t) cout<<"Found "<<t->data<<ln;
    else cout<<-1<<ln;

    t1=RSearch(first, 20);
    if(t1) cout<<"Found "<<t1->data<<ln;
    else cout<<-1<<ln;

    t2=LSearch(first, 20);
    if(t2) cout<<"Found "<<t2->data<<ln;
    else cout<<-1<<ln;
}



