#include<iostream>
using namespace std;

void subseq(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    subseq(ros,ans); //without elem
    subseq(ros,ans+ch); //with elem
    subseq(ros, ans+ to_string(code));// ascii
}
int main(){
 subseq("AB"," ");
 cout<<endl;
}

/*

 B
 66
 A
 AB
 A66
 65
 65B
 6566
*/
