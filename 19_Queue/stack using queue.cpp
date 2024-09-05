#include <bits/stdc++.h>
using namespace std;
//PUSH COSTLY  TC:O(n)
class Stack{
    int N; //Size
    queue<int> q1;
    queue<int> q2;
public:
    Stack(){ //Constructor
        N=0;
    }
    void push(int val){
        q2.push(val);
        N++;

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp=q1; //take temp queue & swap
        q1=q2;
        q2=temp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};

//POP COSTLY : TC:O(n)


class Stack_pop{
    int N; //Size
    queue<int> q1;
    queue<int> q2;
public:
    Stack_pop(){ //Constructor
        N=0;
    }
    void push(int val){
        q1.push(val);
        N++;
    }

    void pop(){
        if(q1.empty()){
            return;
        }

        while(q1.size()!=1){ //place all except 1
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp=q1; //take temp queue & swap
        q1=q2;
        q2=temp;

    }

    int top(){
        if(q1.empty()){
            return -1;
        }
         while(q1.size()!=1){ //place all except 1
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);


        queue<int> temp=q1; //take temp queue & swap
        q1=q2;
        q2=temp;

        return ans;

    }
    int size(){
        return N;
    }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl; //4
    st.pop();
    cout<<st.top()<<endl;//3
    cout<<st.size()<<endl; //3


    Stack_pop s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    cout<<s.top()<<endl; //8
    s.pop();
    cout<<s.top()<<endl;//7
    cout<<s.size()<<endl; //3
    return 0;
}
