#include<iostream>
using namespace std;

void towerofhanoi(int n,char src,char dest,char helper){
    if(n==0){
        return ;
    }
        towerofhanoi(n-1,src,helper,dest);
        cout<<"Move from "<< src <<" to " <<dest <<endl;
         towerofhanoi(n-1,helper,dest,src);
    }

int main(){
    towerofhanoi(4,'A','B','C');
    return 0;
}

/*
Time Complexity: O(2^n)
Move from A to C
Move from A to B
Move from C to B
Move from A to C
Move from B to A
Move from B to C
Move from A to C
Move from A to B
Move from C to B
Move from C to A
Move from B to A
Move from C to B
Move from A to C
Move from A to B
Move from C to B
*/
