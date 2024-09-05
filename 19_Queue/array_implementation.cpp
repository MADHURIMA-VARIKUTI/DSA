#include <iostream>
using namespace std;
#define n 20

class queue{

    int *arr;
    int front;
    int back;

public:
    queue(){
        arr=new int[n];
        front=back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue full"<<endl;
        }
        if(front==-1){ //no elem
            front++;
        }
        back++;
        arr[back]=x;
    }
    void pop(){
        if(front==-1 || front>back){
            return ;
        }
        front++;
    }
    int peek(){
         if(front==-1 || front>back){
            return false;
        }
        return arr[front];
    }
    bool isempty(){
        if(front==-1 || front>back){
            return true;
        }
        else{
            return false;
        }
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
1 empty
*/
