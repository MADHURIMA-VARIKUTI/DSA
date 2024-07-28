#include<iostream>
#include<algorithm>
using namespace std;
//rotate a string in linear time and
//recursively permute on the rotated string.

void perm(string str, int n, string result){
    if(n==1){ //base[ 1 char left]
        cout<<result+str <<endl;
        return;
    }
//process each char of the rem string
    for(int i=0;i<n;i++){
        perm(str.substr(1),n-1,result+str[0]);
          //current character into the output
        rotate(str.begin(),str.begin()+1,str.end());
        //left-rotate the string by 1 unit

        //rotate(str.rbegin(), str.rbegin() + 1, str.rend()); // Right rotation
    }
}

int main(){
    string str="ABC";
    string result;
    perm(str,str.size(),result);
    return 0;
}

/*
Time Complexity: O(n×n!)

Space Complexity: O(n)

ABC
ACB
BCA
BAC
CAB
CBA
*/
