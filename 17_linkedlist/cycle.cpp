//Detetct cycles[Floyd's algo ||  Hare n tortoise algo]
//slow ptr->1 step;  fast ptr->2 steps;
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

void display(node* head){ //by value
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data <<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void makecycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
        if(count==pos){
            startnode=temp;
        }
    }

    temp->next=startnode;

}
bool detect_cycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void remove_cycle(node* &head){
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makecycle(head,3);
    //display(head); //repeat
    cout<<detect_cycle(head)<<endl; //1
    remove_cycle(head);
    cout<<detect_cycle(head)<<endl;
    display(head);

return 0;
}
/*
1
0
1->2->3->4->5->6->NULL
*/
