//reverse k nodes  2->1->4->3->6->5->NULL [k=2]
//reverse first k node using iterative way n next using recursion

//take 3 pointers prev curr next
#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next; //ptr

    node(int val){ //constructor
        data=val;
        next=NULL;
    }

};

void insertAtTail(node* &head,int val){
//head[by ref]
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next=n; //new node
}

void insertAthead(node* &head,int val){//by ref
    node* n=new node(val);
    n->next=head;
    head=n;
}

node* reverse_k(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    //reverse first k nodes
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;

    }
    //recursively for next nodes
    if(nextptr!=NULL){
        head->next=reverse_k(nextptr,k);
    }

    return prevptr; //new head

}

void display(node* head){ //by value
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data <<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    int k=2;
    node* newhead =reverse_k(head,k);
    display(newhead);//3->2->1->NULL




return 0;
}

/* TC:O(n)
1->2->3->4->5->6->NULL
2->1->4->3->6->5->NULL

*/
