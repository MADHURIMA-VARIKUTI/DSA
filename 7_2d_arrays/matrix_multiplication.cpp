#include<bits/stdc++.h>
using namespace std;
int main(){
int n1,n2,n3;
cout<<"enter n1,n2, n3\n";
cin>>n1>>n2>>n3;
int m1[n1][n2];
int m2[n2][n3];
cout<<"enter matrix 1 \n";
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++)
        cin>>m1[i][j];
}
cout<<"enter matrix 2 \n";
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++)
        cin>>m2[i][j];
}

int ans[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++)
       ans[i][j]=0;
}
for(int i=0;i<n1;i++){  //first matrix row
    for(int j=0;j<n3;j++){  //second matrix column
        for(int k=0;k<n2;k++){ //common ->n2
            ans[i][j]+=m1[i][k]*m2[k][j];
        }
    }
}
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++)
       cout<<"matrix multiplication is "<<ans[i][j]<< " ";
       cout<<endl;
}
}
/*
enter n1,n2, n3
1
2
1
enter matrix 1
1
2
enter matrix 2
2
3
matrix multiplication is 8
*/
