#include<iostream>
using namespace std;

bool issafe(int **arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
       return true;
    }
    return false;
}

bool ratinMaze(int **arr,int x,int y,int n,int **solarr){

    if(x==n-1 && y==n-1){
        solarr[x][y]=1;
        return true;
    }
    if(issafe(arr, x, y, n)){
        solarr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solarr)){
            return true;
        }
         if(ratinMaze(arr,x,y+1,n,solarr)){
            return true;
        }
//if both fail current position-> not part of the sol(bt) and returns false.
        solarr[x][y]=0; //backtracking
        return false;
    }
    return false;
}
int main(){
int n;
cin>>n;

//Dynamic Memory Allocation [DMA]
int **arr=new int*[n]; //DMA
for(int i=0;i<n;i++){
    arr[i]=new int[n]; //n rows & col [2D]
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cin>>arr[i][j];
  }
  cout<<endl;
}

int **solarr = new int*[n];
for(int i=0;i<n;i++){
    solarr[i]=new int[n];
      for(int j=0;j<n;j++){
            solarr[i][j]=0; //initialize to 0
      }
}
//starting position (0,0)
if(ratinMaze(arr,0,0,n,solarr)){
    for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<solarr[i][j]<< "";
  }
  cout<<endl;
}
}
return 0;
}

/*
Time & Space Complexity: O(2^n)

i/p
10101
11111
01010
10011
11101

0/p:
10000
11110
00010
00011
00001
*/
