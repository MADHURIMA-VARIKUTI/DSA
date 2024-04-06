#include<bits/stdc++.h>
using namespace std;

int no_of_ones(int n){
int count=0;
while(n){
    n= n&(n-1);
    count++;
}
return count;
}

int main(){
cout<<no_of_ones(19)<<endl;  //3
}

/*
19= 10011
18=10010
19 & 18= 10010 =18

18 & 17= 16

16 & 15= 0 [stop]


*/
