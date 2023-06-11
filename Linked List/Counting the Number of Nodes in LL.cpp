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

int CountOfNodesLL(struct Node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

int recursiveFunctionOfCount(struct Node *p){
    if(!p) return 0;
    else return recursiveFunctionOfCount(p->next)+1;
}

int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};

    CreateLL(A, 10);

    int c1,c2;

    c1=CountOfNodesLL(first);
    cout<<c1<<ln;
    c2=recursiveFunctionOfCount(first);
    cout<<c2<<ln;
}


