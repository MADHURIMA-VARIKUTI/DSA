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
    int row_start=0;
    int row_end=n-1;
    int columns_start=0;
    int columns_end=m-1;

while((row_start<row_end)&&(columns_start<columns_end)){
        //top row from left to right
            for(int i=columns_start;i<=columns_end;i++){
                cout<<arr[row_start][i]<<"   ";
            }
            row_start++;
        //rightmost column from top to bottom
            for(int i=row_start;i<=row_end;i++){
                cout<<arr[i][columns_end]<<"  ";
            }
            columns_end--;
        //bottom row from right to left
            for(int i=columns_end;i>=columns_start;i--){
                cout<<arr[row_end][i]<<"  ";
            }
            row_end--;
        //leftmost column from bottom to top
            for(int i=row_end;i>=row_start;i--){
                cout<<arr[i][columns_start]<<"  ";
            }
            columns_start++;
        }
        //single column left
        if((columns_end==columns_start)&&(row_end!=row_start)){
            for(int i=row_start;i<=row_end;i++){
                cout<<arr[i][columns_start]<<"  ";
            }}
            //single row left
            if((columns_end!=columns_start)&&(row_end==row_start)){
                for(int i=columns_start;i<=columns_end;i++){
                    cout<<arr[row_start][i]<<"  ";
                }
            }
            //single element left
            if((columns_end==columns_start)&&(row_end==row_start)){
                cout<<arr[row_start][columns_start];
            }

return 0;
}

/*
enter n and m:
3
3
enter elements:
1
2
3
4
5
6
7
8
9
1   2   3   6  9  8  7  4  5
*/




