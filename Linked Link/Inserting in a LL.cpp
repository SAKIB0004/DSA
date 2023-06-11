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

void DisplayLL(struct Node *p){
    while(p){
        cout<<p->data<<sp;
        p=p->next;
    }
    cout<<ln;
}

int CountOfNodesLL(struct Node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void InsertLL(struct Node *p, int pos,int x){
    if(pos < 0 || pos >CountOfNodesLL(p)) return;

    struct Node *t=new Node;
    t->data = x;

    //Insert before first node
    if(pos == 0){
        t->next = first;
        first = t;
    }
    //Insert any other position
    else{
        p=first;
        for(int i=0;i<pos-1;i++) p=p->next;

        if(p){
            t->next = p->next;
            p->next=t;
        }
    }

}
int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};

    CreateLL(A, 10);

    InsertLL(first, 0 , 1);
    InsertLL(first, 5, 45);
    InsertLL(first , 12, 110);
    DisplayLL(first);
}
