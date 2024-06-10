#include<iostream>
using namespace std;
//Each person can be paired with only one person
//or does not pair with anyone.
int pair_friends(int n){
   if(n==0||n==1||n==2){
    return n;
   }
   return pair_friends(n-1)+ pair_friends(n-2)*(n-1);
     //n[single]              n [paired wd any n-1 * leaving n-2 friends to be paired]
}

int main(){
    cout<<pair_friends(3)<<endl;
}

 /*
4

A B C

BC  A
AB  C
AC  B
A  B  C -> all single

Time & Space Complexity: O(n)
*/
