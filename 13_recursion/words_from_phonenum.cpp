#include<iostream>
using namespace std;

string keypadarr[]={" ","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadarr[ch-'0']; //to get int
    //if ch is '2'=>  "abc"
    string ros=s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){
keypad("23"," ");
return 0;
}

/*
 ad
 ae
 af
 bd
 be
 bf
 cd
 ce
 cf


*/
