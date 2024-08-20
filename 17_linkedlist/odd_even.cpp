//even pos after odd pos 1->2->3->4->5->6
//1-> 3-> 5-> 2-> 4-> 6->

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

void evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){ //wt if no next null elem
        even->next=NULL;
    }

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


    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++){
          insertAtTail(head,arr[i]);
    }
    evenafterodd(head);
    display(head);


    return 0;
}
//1->3->5->2->4->6->NULL
//TC: O(n)
