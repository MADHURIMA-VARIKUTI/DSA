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
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}}

/*
enter n : 6
enter elem:
12
45
23
51
19
8
8 12 19 23 45 51
*/
