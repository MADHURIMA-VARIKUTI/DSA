#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cout<<"enter n and m: \n";
cin>>n>>m;
cout<<"enter elements: \n";
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
cout<<"Matrix is: \n";
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int x;
cout<<"enter x: \n";
cin>>x;
bool flag=false;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(arr[i][j]==x){
                    cout<<i<<" "<<j<<"\n";
                    flag=true;
                }
        }
}
if(flag){
    cout<<"Element is found\n";
}
else{
    cout<<"Element is not found\n";
}
}
/*
enter n and m:
3
3
enter elements:
9
8
7
6
5
4
3
2
1
Matrix is:
9 8 7
6 5 4
3 2 1
enter x:
3
2 0
Element is found
*/
