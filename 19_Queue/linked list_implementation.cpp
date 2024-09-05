#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void push(int x){
        node* n=new node(x);

        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front==NULL){ //no elem
            return;
        }
        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek(){
         if(front==NULL){ //no elem
            return -1;
        }
        return front->data;
    }

    bool isempty(){
     if(front==NULL){ //no elem
            return true;
    }
     return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.isempty()<<endl;

}

/*
1
2
3
4
1
