#include <bits/stdc++.h>
#include <stack>
using namespace std;
/*
class que{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x){
        s1.push(x);
        //return s1.top();
    }
    int pop(){
    while(s1.empty() && s2.empty()){
        return -1;
    }
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int topval=s2.top();
    s2.pop();
    return topval;
    }
    bool isempty(){
         if(s1.empty() && s2.empty()){
         return true;
    }
    return false;
    }
};

int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
   cout<<q.isempty()<<endl;//0
    cout<<q.pop();//1
    cout<< q.pop();//2
     cout<<q.pop();//3
    cout<< q.pop();//4

    cout<<q.isempty()<<endl;//1
}

//for push O(1) and pop O(n)
*/

//using function call stack
class que{
    stack<int> s1;


public:
    void push(int x){
        s1.push(x);
        //return s1.top();
    }
    int pop(){
    while(s1.empty()){
        return -1;
    }

    int x=s1.top();
    s1.pop();
    if(s1.empty()){
        return x;
    }
//recursively pop and push
    int item=pop();
    s1.push(x);
    return item;
    }
    bool isempty(){
         if(s1.empty()){
                cout<<"queue is empty"<<endl;
         return true;
    }
    return false;
    }
};

int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.isempty()<<endl;//0
    cout<<q.pop()<<endl;;//1
    cout<< q.pop()<<endl;;//2
    cout<<q.pop()<<endl;;//3
    cout<< q.pop()<<endl;;//4

    cout<<q.isempty()<<endl;//1
}
