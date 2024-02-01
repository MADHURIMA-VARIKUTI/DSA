/*Find whether there exist 2 numbers that sum to K.
Time Complexity: O(N^2)
*/

#include <iostream>
using namespace std;

bool pairsum(int arr[],int n,int k){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==k){
                cout<<"target sum found at "<<i<<" "<<j<<endl;
           return true;
        }
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
21
target sum found at 2 4  [7+14]
1
*/
