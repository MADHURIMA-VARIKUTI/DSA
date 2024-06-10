#include<iostream>
using namespace std;

void permutation(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i]; // B
        string ros= s.substr(0,i)+s.substr(i+1);
//start from index 0 and get 1 elem [A] and next [C]
        permutation(ros,ans+ch);
    }
}

int main(){
 permutation("abc"," ");
 return 0;
}

/*
 abc
 acb
 bac
 bca
 cab
 cba


Iteration 1 (i = 0):
ch = 'a'
ros = "" + "bc" = "bc"
Recursive call: permutation("bc", "a ")

Time Complexity: O(N*2^n)
Space Complexity: O(2^n)
*/
