#include <iostream>
#include <stack>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1; //(
    }
}

string infix_to_postfix(string s){
    stack <char> st; //input
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){ //abc
            res+=s[i];
        }
        else if(s[i]=='('){ //(
                    st.push(s[i]);
                }
        else if(s[i]==')'){ //)
            while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();

            }
            if(!st.empty()){
                st.pop(); //pop (
            }}
            else{ //opearator
                while(!st.empty() && prec(st.top())>prec(s[i])){
                      res+=st.top();
                      st.pop();
                }
                st.push(s[i]); //if higher operator

            }
            }
            while(!st.empty()){
                     res+=st.top();
                      st.pop();

            }
            return res; //final ans

        }


int main(){
    cout<<infix_to_postfix("(a-b/c)*(a/k-l)");
    return 0;
}
