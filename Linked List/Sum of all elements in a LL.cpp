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
int SumOfLL(struct Node *p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

//Recursive Approach
int sumOfLLrecursively(struct Node *p){
    int sum=0;
    if(!p) return 0;
    else return sumOfLLrecursively(p->next)+p->data;
}

int main(){
    int A[10]={10,20,30,40,50,60,70,80,90,100};

    CreateLL(A, 10);

    int sum1,sum2;

    sum1=SumOfLL(first);
    cout<<sum1<<ln;
    sum2=sumOfLLrecursively(first);
    cout<<sum2<<ln;
}

