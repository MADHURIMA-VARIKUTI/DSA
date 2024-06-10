/*number of ways to tile the floor Hor and Ver
2*n board and tiles of size 2*1
*/
#include<iostream>
using namespace std;

int tiling(int n){
    if(n==0){
        return 0;
       }
    if(n==1){
        return 1;
    }
    return tiling(n-1)+tiling(n-2);
// (n-1) if placed vertically
// (n-2)if placed horizontally
}
int main(){
    cout<<tiling(4)<<endl;
}

/*
4

4 -> all horizontally
4-> all vertically
2-> H & 2->V
*/
