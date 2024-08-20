#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int postfix(string s){
    stack <int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{ //operator
            int op2=st.top(); //op2
            st.pop();
            int op1=st.top(); //op1
            st.pop();

            switch(s[i]){

            case '+':
            st.push(op1+op2);
            break;
            case '-':
            st.push(op1-op2);
            break;

            case '*':
            st.push(op1*op2);
            break;
            case '/':
            st.push(op1/op2);
            break;
             case '^':
            st.push(pow(op1,op2));
            break;


            default:
                break;
            }
        }
    }
    return st.top(); //final evaluated val
}

int main(){
    cout<<postfix("46+2/5*7+");

    return 0;

}
//32
////TC:O(l) where l->length of the string
