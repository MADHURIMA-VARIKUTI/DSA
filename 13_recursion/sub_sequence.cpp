#include<iostream>
using namespace std;
//For each character, we have two choices,
//either we include it or not.
void subseq(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);

    subseq(ros,ans); //without elem
    subseq(ros,ans+ch); //with elem
}
int main(){
 subseq("ABC"," ");
 cout<<endl;
}

/*

Time Complexity: O(2^n)
 C
 B
 BC
 A
 AC
 AB
 ABC
 */
