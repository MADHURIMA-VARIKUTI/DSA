#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos){
return ((n & (1<<pos))!=0);
}

int setbit(int n,int pos){
return (n | (1<<pos));
}

int clearbit(int n,int pos){
int mask= ~(1<<pos);
return (n & mask);
}

int updatebit(int n, int pos, int value){ //clear n then set
int mask= ~(1<<pos);
n= (n & mask);
return (n | (value<<pos));
}

int main(){
cout<<getbit(5,2)<<endl;  //1

cout<<setbit(5,1)<<endl;  //7

cout<<clearbit(5,2)<<endl; //1

cout<<updatebit(5,1,1)<<endl; //7
return 0;
}
