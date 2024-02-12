/* < X X
      >X
start from top right elem/ bottom left elem
1  4  7  11
2  5  8  12
3  6  9  16
10 13 14 17
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n,target;
cout<<"enter m,n and target \n";
cin>>m>>n>>target;
int mat[m][n];
cout<<"enter elements \n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
        cin>>mat[i][j];
}
int r=0, c=n-1; //top right elem
bool found=false;
while(r<m && c>0){
    if(mat[r][c]=target){
        found=true;
    }
    if(mat[r][c]>target){
        c--;
    }
    else{
        r++;
    }
}
if(found){
    cout<<"Element found";
}
else{
    cout<<"Element not found";
}
}
/*
enter m,n and target
2
2
5
enter elements
1
5
7
6
Element found
*/
