/*To get the Min sub array[non wrap sum] we multiply the array by -1 and get the maximum sum
sub array using kadane's algorithm
Time Complexity: O(N)
*/
#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[],int n){
int curr_sum=0;
int max_sum=INT_MIN;
for(int i=0;i<n;i++){
    curr_sum+=arr[i];
    if(curr_sum<0){
        curr_sum=0;
    }
     max_sum=max(max_sum,curr_sum);
}
return max_sum;
}
int main(){
int n;
cout<<"enter n: \n";
cin>>n;
int arr[n];
cout<<"enter elem: \n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int wrap_sum,non_wrap_sum;

non_wrap_sum=kadane(arr,n);
int total_sum=0;
for(int i=0;i<n;i++){
    total_sum+=arr[i];
    arr[i]=-arr[i];
}
wrap_sum=total_sum+kadane(arr,n);
cout<<"max sum is "<<max(wrap_sum,non_wrap_sum)<<endl;
return 0;
}
/*
enter n:
7
enter elem:
4
-4
6
-6
10
-11
12
max sum is 22
 [12+4+ -4 +6+ -6 +10= 22] wrap elem  or
(total sum- -(kadane)= 11- -(kadane))= 11-(-11)=22

enter n:
6
enter elem:
-1
4
-6
7
5
-4
max sum is 12
[ 7+5]= non wrap elem
*/
