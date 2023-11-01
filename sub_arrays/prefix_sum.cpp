#include <iostream>
#include <climits>
using namespace std;

int main(){
int n;
cout<<"enter n: \n";
cin>>n;
int a[n];
cout<<"enter elem: \n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
//prefix sum technique :Time Complexity: O(N^2)]
int curr_sum[n+1];
curr_sum[0]=0;
for(int i=0;i<=n;i++){
    curr_sum[i]=curr_sum[i-1]+a[i-1];
}
int max_sum=INT_MIN;
for(int i=1;i<=n;i++){
  int sum=0;
  for(int j=0;j<i;j++){
    sum=curr_sum[i]-curr_sum[j];
    max_sum=max(max_sum,sum);
  }
}
cout<<"max sum is : "<<max_sum<<endl;
}
/*
enter n:
4
enter elem:
-1
4
7
2
max sum is : 13
*/
