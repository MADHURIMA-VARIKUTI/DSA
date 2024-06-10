#include<iostream>
using namespace std;

int countpath(int s, int e){
    if(s==e) //3 to 3 it's [1]
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){ // move based on value on dice
       count += countpath(s+i,e);
    }
    return count;
}

int main(){
cout<<countpath(0,3)<<endl; //(1-3)+(2-3)+(3-3)
return 0;
}

/*
4

Time &space Complexity: O(2^n)
Current answer = countPath(s+1,e) + countPath(s+2,e) + countPath(s+3,e)
0 1 2 3

0-1 1-3
0-2 2-3
0-3
0-1 1-2 2-3
*/
