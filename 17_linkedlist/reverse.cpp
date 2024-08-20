
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

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr; //new head
}

//recursive way
node* reverse_recursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *newhead=reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;

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

    display(head);//1->2->3->NULL

    node* newhead =reverse(head);
    display(newhead);//3->2->1->NULL

    //node* newhead1 =reverse_recursive(head);
    //display(newhead1); //3->2->1->NULL

return 0;
}
