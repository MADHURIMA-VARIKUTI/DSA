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

void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){ //no elem
        return;
    }

    if(head->next==NULL){ //1 elem
        deleteathead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data !=val){
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

void display(node* head){ //by value
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data <<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head ,int key){
        node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAthead(head,4);
    display(head);
   cout<<search(head,5)<<endl;
    deletion(head,3);
    display(head);
    deleteathead(head);
    display(head);
return 0;
}
/*
1->2->3->NULL
4->1->2->3->NULL
0
4->1->2->NULL
1->2->NULL
*/
