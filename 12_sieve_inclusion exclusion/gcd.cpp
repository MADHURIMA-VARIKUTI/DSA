//Euclid algorithm
#include<iostream>
using namespace std;

int gcd(int a, int b){
  while(b!=0){
    int rem=a%b;
    a=b;
    b=rem;
  }
  return a;
}
int main(){
 int a,b;
 cin>>a>>b;
 cout<<gcd(a,b)<<endl;
 return 0;
}

/*
42
24
6
a  b  rem
42%24=18
24%18=6
18%6=0
*/
