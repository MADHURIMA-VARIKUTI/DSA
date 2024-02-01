/*The Array should be sorted for two pointer approach.
keep a low and high pointer, decide which pointer to
move on the basis of arr[low] + arr[high].
Time Complexity: O(N)
*/
#include <iostream>
using namespace std;

bool pairsum(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
     if(arr[low]+arr[high]==k){
        cout<<low<<" "<<high<<endl;
        return true;
     }
     else if(arr[low]+arr[high]>k){
        high--;
     }
     else{
        low++;
     }
    }
    return false;
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
int k;
cout<<"enter target sum: \n";
cin>>k;
cout<<pairsum(arr,n,k);
}
/*
enter n:
5
enter elem:
2
4
7
11
14
enter target sum:
21                 [7+14]
2 4
1
*/
