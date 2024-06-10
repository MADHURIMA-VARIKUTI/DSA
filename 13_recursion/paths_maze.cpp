/* start from (0,0) move -> i+1 or downward j+1
end pt (n-1,n-1)
*/
#include<iostream>
using namespace std;

int countpathmaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1; //path found
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);

}
int main(){
cout<<countpathmaze(3,0,0)<<endl;
}
/*
Time Complexity: O(2^n)

6

*/
