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

int length(node* head){
    node*temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* append_k(node* &head,int k){
    node* newhead;
    node* newtail;
    node* temp=head;
    int count=1;
    int l=length(head);
    k=k%l; //[case to handle if k>l]
    while(temp->next!=NULL){

            if(count==l-k){
                newtail=temp;
            }
            if(count==l-k+1){
                newhead=temp;
            }

            temp=temp->next;
            count++;

    }
    newtail->next=NULL;
    temp->next=head;

    return newhead;

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
    node* newhead=append_k(head,3);

    display(newhead);
return 0;
}

/*1->2->3->4->5->6->NULL
4->5->6->1->2->3->NULL
