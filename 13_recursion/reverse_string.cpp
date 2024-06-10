#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return ;
    }
    string rest=s.substr(1);
    reverse(rest);
    cout<<s[0]; //first char
}
int main(){
 reverse("madhu");
}
//uhdam
/*
Time & space Complexity: O(N ^2)
s.substr(i) takes O(N) times and it is called O(N) times.
madhu
adhu
dhu
hu
u
" "
*/
