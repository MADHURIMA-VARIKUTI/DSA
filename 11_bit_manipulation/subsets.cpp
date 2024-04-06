#include<bits/stdc++.h>
using namespace std;

void subsets(int arr[],int n){
  for(int i=0;i< (1<<n);i++){ // 0 to 2^n -1
    for(int j=0;j<n;j++){
        if( i & (1<<j)){
//for every i check if j th bit is set or not and get that bit.
            cout<<arr[j]<<" ";
        }
    }
    cout<<endl;
  }
}
int main(){
 int arr[4]={1,2,3};
subsets(arr,3);
}

/*

1
2
1 2
3
1 3
2 3
1 2 3

*/
