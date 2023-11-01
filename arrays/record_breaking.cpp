// RECORD BREAKING DAY[NO.OF VISITORS should be more
//than yest n next following day ]
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter n: \n";
cin>>n;

int a[n+1];
a[n]=-1;

cout<<"enter elem:";
for(int i=0;i<n;i++){
    cin>>a[i];
}
//1 day
if(n==1){
    cout<<"1"<<endl;
    return 0;

}
int ans=0; //no.of record breaking days
int mx=-1; //max till now
for(int i=0;i<n;i++){
if(a[i]>mx && a[i]>a[i+1]){
    ans++;
}
ans=max(mx,a[i]);
}
cout<<"no.of record breaking days: "<<ans<<endl;
}
//Overall time complexity: O(n)
/*
enter n:
8
enter elem:1
2
0
7
2
0
2
2
no.of record breaking days:2   [2-> yes; 7-> yes]
*/
