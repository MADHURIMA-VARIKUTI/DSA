#include<iostream>
using namespace std;

void permutations(string str,int i,int n){
    if(i==n-1){  //base
        cout<<str<<endl;
        return;
    }
    //process each char of the rem string
    for(int j=i;j<n;j++){
        swap(str[i],str[j]);
 // recur for substring str[i+1, n-1]
        permutations(str,i+1,n);

        swap(str[i],str[j]); //backtrack
    }
}

int main(){
    string str="ABC";
    permutations(str,0,str.length());
    return 0;
}

/*
string of length n, there are n! permutations&
printing a single permutation is O(n).
Time Complexity: O(n×n!)

Space Complexity: O(n)
ABC
ACB
BAC
BCA
CBA
CAB
*/
