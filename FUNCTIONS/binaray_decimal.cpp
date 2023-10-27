#include <iostream>
#include <math.h>
using namespace std;

int binarytodecimal(int n){
int ans=0;
int x=1;
while(n>0){
    int y=n%10;
    ans+=x*y;
    x*=2;
    n/=10;
}
return ans;
}

int decimaltobinary(int m){
int power=0;
int binary=0;
while(m>0){
int last=m%2;
    binary=binary+(pow(10,power)*last);
    power++;
    m=m/2;
    }
return binary;
}

int main(){
cout<<"enter binary num: \n";
int n;
cin>>n;
cout<< binarytodecimal(n);

cout<<"\nenter decial num: \n";
int m;
cin>>m;
cout<< decimaltobinary(m);
}

/*
enter binary num:
101101
45
enter decial num:
45
101101
*/
