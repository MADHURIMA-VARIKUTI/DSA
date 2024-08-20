#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next; //ptr
    node* prev;

     node(int val){ //constructor
        data=val;
        next=NULL;
        prev=NULL;
    }


};
void insertAthead(node* &head,int val){//by ref
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    n->prev=NULL;

    head=n;
}

void insertAtTail(node* &head,int val){
//head[by ref]
    node* n=new node(val);

    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next=n; //new node
    n->prev=temp;
}

void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}
void deletion(node* &head,int pos){

    if(pos==1){
        deleteathead(head);
        return;
    }
   //temp[node to delete]
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }

     temp->prev->next=temp->next;
     if(temp->next!=NULL){
         temp->next->prev=temp->prev;
     }

    delete temp;
}

void display(node* head){ //by value
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data <<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAthead(head,4);
    display(head);

    deletion(head,3);
    display(head);
    deleteathead(head);
    display(head);
return 0;
}
/*
1<->2<->3<->NULL
4<->1<->2<->3<->NULL
4<->1<->3<->NULL
1<->3<->NULL
*/
