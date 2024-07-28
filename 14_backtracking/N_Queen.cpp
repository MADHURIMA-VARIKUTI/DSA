//N queen in N*N board
#include <iostream>
using namespace std;

bool issafe(int**arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){ //check for col
            return false;
        }
    }
    int row=x,col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--; //left diagonal
    }
    row=x,col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++; //right diagonal
    }
    return true;//no queen in col n diagonal
}
bool nQueen(int **arr,int row,int n){
    //if a queen is placed in a row no need to check next pos ; directly move to next row so no need to take col
    if(row>=n){ //all queens placed
        return true;
    }
    for(int col=0;col<n;col++){
        if(issafe(arr,row,col,n)){
            arr[row][col]=1;

            if(nQueen(arr,row+1,n)){ //check for next row
                return true;
            }

            arr[row][col]=0; //backtrack
        }
    }

    return false;
}

int main(){
int n;
cin>>n;

    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
                arr[i][j]=0;

        }
    }
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}}
return 0;
}
/*
4
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0
*/

