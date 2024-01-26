#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter n : ";
cin>>n;
cout<<"enter elem: \n";
int arr[n];
for(int m=0;m<n;m++){
    cin>>arr[m];
}

for(int i=1;i<n;i++){
int curr=arr[i];
int prev=i-1;
while(prev>=0 && arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev--;
}
arr[prev+1]=curr;
}
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
