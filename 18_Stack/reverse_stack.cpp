//recursion ; insert at bottom using call stack
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st,int ele){
     if(st.empty()){
        st.push(ele); //5
        return;
    }

    int top_elem=st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(top_elem);

}
void reverse(stack<int> &st){ //call by ref

    if(st.empty()){ //no elem to reverse
        return;
    }
    int ele=st.top(); //5
    st.pop();

    reverse(st); //for rem stack
    insertAtBottom(st,ele);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

     reverse(st);
     while(!st.empty()){
        cout<<st.top()<<"";
        st.pop();
    }cout<<endl;

return 0;
}
//12345
