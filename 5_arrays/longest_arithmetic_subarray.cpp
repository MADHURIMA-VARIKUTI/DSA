//GOOGLE
#include <iostream>
using namespace std;
//NUM of sub array= nC2+n= n*(n+1)/2
//NUM of subsequences of an array= 2 power n

// At least 2 int ; diff b/w consecutive int r equal
int main(){
int n;
cout<<"enter n: \n";
cin>>n;
int a[n];
cout<<"enter elem:";
for(int i=0;i<n;i++){
    cin>>a[i];
}

int ans=2;
int pd=a[1]-a[0];
int j=2;
int curr=2;

while(j<n){
    if(pd==a[j]-a[j-1]){
        curr++;
    }
    else{
        pd=a[j]-a[j-1];
        curr=2;
    }
    ans=max(ans,curr);
    j++;
}

cout<<"longest sub array length is "<<ans<<endl;
}

/*
enter n:
7
enter elem:10
7
4
6
8
10
11
longest sub array length is 4 [4,6,8,10]
*/
