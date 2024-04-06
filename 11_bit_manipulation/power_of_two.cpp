#include<bits/stdc++.h>
using namespace std;

bool is_power_2(int n){
return (n && !(n & n-1));
}
int main(){
    cout<<is_power_2(8); //1
     cout<<is_power_2(7); //0
return 0;
}

/*
n=8 = 1000
n-1=7=0111
n & (n-1) =0000    power of 2
!(n & (n-1))=1;

if base condition n=0 then ans =0
    so n && !(n & n-1)

n=7 =0111
n=6 = 0110
 n & (n-1) =0110 // not power of 2
*/
