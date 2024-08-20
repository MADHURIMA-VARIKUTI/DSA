//implementation of array in stack
#include <iostream>
using namespace std;
#define n 50

class stack{
    int* arr;
    int top;

public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
    if(top==n-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"No elem to pop"<<endl;
        }
        top--;
    }
    int Top(){ //data mem n mem fun shouldn't be the same
         if(top==-1){
            cout<<"No elem in stack"<<endl;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

} ;
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty();
    return 0;
}

/*
3
2
No elem to pop
0
*/
