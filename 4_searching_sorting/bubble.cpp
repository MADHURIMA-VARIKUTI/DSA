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

int counter=1;
while(counter<n-1){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

        }
    }
    counter++;

}
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}}
/*
enter n : 5
enter elem:
1
7
3
6
2
1 2 3 6 7
*/
