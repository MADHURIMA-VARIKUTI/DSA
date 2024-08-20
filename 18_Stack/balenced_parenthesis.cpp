//{[()]} -> balanced
// [{()]} -> un balanced

#include <iostream>
#include <stack>
using namespace std;

bool isvalid(string s) {
    int n = s.size();
    stack <char> st;
    bool ans = true;

    for(int i = 0; i < n; i++) {
        if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
        else if(s[i] == ']') {
            if(!st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
        else if(s[i] == '}') {
            if(!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }

        else {

        }
    }

    if(!st.empty()) { // Elements left
        return false;
    }
    else {
        return ans;
    }
}

int main() {
    string s = "{([]())}";
    if(isvalid(s)) {
        cout << "Valid string" << endl;
    } else {
        cout << "Invalid string" << endl;
    }
    return 0;
}

