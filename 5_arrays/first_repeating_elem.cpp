//AMAZON ; oracle

#include <iostream>
#include<climits>  //INT_MAX
#include<algorithm> //fill_n function
using namespace std;
int main(){
int n;
cout<<"enter n: ";
cin>>n;
int arr[n];
cout<<"enter elem: \n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int idx[100]={-1};
//fill_n(idx,100,-1);
int minidx=INT_MAX;

for(int i=0;i<n;i++){
    int value=arr[i];
    if(idx[value]>0 && idx[value]<minidx){
        minidx=idx[value];
    }
    idx[value]=i;
}
cout<<"minimum index is "<<minidx;
}

/*
enter n: 9
enter elem:
1
2
3
4
3
5
6
5
7
minimum index is 2
*/
