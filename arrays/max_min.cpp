#include <iostream>
#include <climits>
using namespace std;
int main(){
 int n;
 cout<<"enter n: ";
 cin>>n;
 int arr[n];
   cout<<"enter elem\n ";
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
  int maxnum=INT_MIN;
  int minnum=INT_MAX;
 for(int i=0;i<n;i++) {
      if(arr[i]>maxnum){
        maxnum=arr[i];
    }
      if(arr[i]<minnum){
        minnum=arr[i];
    }
   }
    cout<<"max num is "<<maxnum<<"\n min num is "<<minnum<<endl;
}

/*
enter n: 5
enter elem
 0
-1
69
34
111
max num is 111
 min num is -1
 */
