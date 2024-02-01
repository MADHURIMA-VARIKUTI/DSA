/*Start taking the sum of the array, as soon as it gets -ve
discard the current sub array, and start a new sum.
Time Complexity: O(N)
*/
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
int curr_sum=0;
int max_sum=INT_MIN;
for(int i=0;i<n;i++){
    curr_sum+=a[i];
    if(curr_sum<0){
        curr_sum=0;
    }
     max_sum=max(max_sum,curr_sum);
}
cout<<"max sum using kadane's algorithm is : "<<max_sum;
}
/*
enter n:
6
enter elem:
-1
4
-6
2
7
-3
max sum using kadane's algorithm is : 9
*/
