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
cout<<"sub arrays: \n ";
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       for(int k=i;k<=j;k++){
        cout<<a[k]<<" ";
       }
       cout<<endl;
    }
}
//brute force approach [Time Complexity: O(N^3)]

int max_sum=INT_MIN;
cout<<"max sub array sum: \n";
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       int sum=0;
       for(int k=i;k<=j;k++){
         sum+=a[k];
       }
       max_sum=max(max_sum,sum);
    }
}
   cout<<max_sum<<endl;
return 0;
}

/*
enter n:
4
enter elem:
-1
4
7
2
sub arrays:
-1
-1 4
-1 4 7
-1 4 7 2
4
4 7
4 7 2
7
7 2
2
max sub array sum:
13
*/
