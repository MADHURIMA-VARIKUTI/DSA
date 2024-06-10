#include<iostream>
using namespace std;

string moveallx(string s){
    if(s.length()==0){
        return" ";
    }
    char ch= s[0];
    string ros= moveallx(s.substr(1));
    if(ch =='x'){
        return (ros+ch); //move to last
    }
    else{
        return (ch+ros);
    }

}

int main(){
    cout<<"axxbcxabcdxex"<<endl;
cout<<moveallx("axxbcxabcdxex")<<endl;
return 0;
}

/*
Time & Space Complexity: O(N^2)

axxbcxabcdxex
abcabcde xxxxx
/
