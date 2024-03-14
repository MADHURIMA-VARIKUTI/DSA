#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str="bjxgvfdkuvjbkda";
// convert into upper case
for(int i=0;i<str.size();i++){
   if(str[i]>='a' && str[i]<='z'){
       str[i]-=32;
   }
}
   cout<<str<<endl; //BJXGVFDKUVJBKDA

// convert into lower case
for(int i=0;i<str.size();i++){
   if(str[i]>='A' && str[i]<='Z'){
       str[i]+=32;
   }
}
cout<<str<<endl; //bjxgvfdkuvjbkda

string s1="jbfxkdivslg";
transform(s1.begin(),s1.end(),s1.begin(),::toupper);
//begin n end iterator ;starting from begin convert to upper
cout<<s1<<endl; //JBFXKDIVSLG

//form the biggest number from numeric string

string s2="1893770";
sort(s2.begin(),s2.end(),greater<int>());
cout<<s2<<endl; //9877310

//max frequency char
string s="kvcmmidchmolgvmdbjbm";

int freq[26];
for(int i=0;i<26;i++){
    freq[i]=0;
}
for(int i=0;i<s.size();i++){
    freq[s[i]-'a']++; // if a-> index 0 a-a=0; if b -> b-a=1 index 1
}
char ans='a';
int maxf=0;
for(int i=0;i<26;i++){
    if(freq[i]>maxf){
        maxf=freq[i];
        ans=i+'a';
    }
}
   cout<<maxf<<" "<<ans<<endl; //5 m

   return 0;
}
/*
BJXGVFDKUVJBKDA
bjxgvfdkuvjbkda
JBFXKDIVSLG
9877310
5 m
*/
