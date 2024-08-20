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
     int l=0;
    node*temp=head;

    while(temp!=NULL){

        temp=temp->next;
        l++;
    }
    return l;
}

int intersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    node* ptr1;
    node* ptr2;

    int diff=0;
    if(l1>l2){
        diff=l1-l2;
        ptr1=head1; //large
        ptr2=head2;
    }
    else{
        diff=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }


    while(diff){
         ptr1=ptr1->next;
         if(ptr1==NULL){
            return -1;
         }
         diff--;
    }
    while(ptr1!=NULL && ptr2!=NULL){

            if(ptr1==ptr2){
                return ptr1->data;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;

    }

    return -1;


}

void intersect(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }

    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }

    temp2->next=temp1;

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
    node* head1=NULL;
    node* head2=NULL;

    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);

    insertAtTail(head2,9);
    insertAtTail(head2,10);

    intersect(head1,head2,3);

    display(head1);
    display(head2);

    cout<<intersection(head1,head2)<<endl;
return 0;
}

/*
1->2->3->4->5->6->NULL
9->10->3->4->5->6->NULL
3

*/
