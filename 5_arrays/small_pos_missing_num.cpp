//AMAZON SAMSUNG SNAPDEAL ACCOLITE

#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter n: ";
cin>>n;
int a[n];
cout<<"enter elem: \n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
const int N=n+1;
bool check[N];
for(int i=0;i<N;i++){
    check[i]=0;
}
for(int i=0;i<N;i++){
    if(a[i]>0){
        check[i]=1;
    }
}
int ans=-1;
for(int i=1;i<N;i++){
if(check[i]==0){
    ans=i;
    break;
}
}
cout<<"small positive missing num is :" <<ans<<endl;
return 0;
}
/*
enter n: 5
enter elem:
-9
1
2
-4
5
small positive missing num is :3
*/
