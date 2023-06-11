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
int MaxLL(struct Node *p){
    int mx= INT32_MIN;
    while(p){
        if(p->data>mx) mx=p->data;
        p=p->next;
    }
    return mx;
}

//Recursive Approach
int RMaxLL(struct Node *p){
    int mx=0;
    if(!p) return INT32_MIN;
    else{
        mx=RMaxLL(p->next);
        if(mx>p->data) return mx;
        else return p->data;
    }
}

int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};

    CreateLL(A, 10);

    cout<<MaxLL(first)<<ln;

    cout<<RMaxLL(first)<<ln;
}
