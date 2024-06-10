#include<iostream>
#include<algorithm>
using namespace std;

string removeDup(string s){
  if(s.length()==0){
      return "";
   }
  char ch=s[0];
  string ans=removeDup(s.substr(1));
//If the same character found then return ros
  if(find(ans.begin(),ans.end(),ch) != ans.end()){
      return ans;
  }
  return (ch + ans);
}
int main(){
cout<<removeDup("abcabcde")<<endl;
return 0;
}
//abcde
//Time & space Complexity: O(N^2)
