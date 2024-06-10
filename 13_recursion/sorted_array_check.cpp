#include<iostream>
using namespace std;

bool sorted(int arr[],int n ){
   if(n==1){ //last element left
    return true;
   }
// pos -> arr+1 i.e.. if (1,5) is sorted check for (2,4);
   bool restarray=sorted(arr+1,n-1);
   return (arr[0]<arr[1] && restarray);
  }
int main(){
int arr[]={1,2,3,4,5};
cout<<sorted(arr,5);
}

//1
