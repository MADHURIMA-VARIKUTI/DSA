//GOOGLE ; AMAZON ; FACEBOOK ; VISA
//continuous sub array sum=S [index]
#include <bits/stdc++.h>
using namespace std;

int main(){
long int mx=-19999999;
int n;
cout<<"enter n: ";
cin>>n;
int a[n];
cout<<"enter elem: \n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
int out_sum;
cout<<"enter output sum: ";
cin>>out_sum;
int i=0,j=0,st=-1,en=-1;
int curr_sum=0;
while(j<n && curr_sum+a[j]<=out_sum){
    curr_sum+=a[j];
    j++;
}
 if(curr_sum==out_sum){
       cout<<"index are"<<i+1<<" "<<j<<endl;
       return 0;
    }
 while(j<n){
    curr_sum+=a[j];
    while(curr_sum>out_sum){
        curr_sum-=a[i];
        i++;
    }
    if(curr_sum==out_sum){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
 }
 cout<<"index are: "<<st<<" "<<en<<endl;
}
/*
enter n: 4
enter elem:
1
2
5
8
enter output sum: 7
index are: 2 3
*/
