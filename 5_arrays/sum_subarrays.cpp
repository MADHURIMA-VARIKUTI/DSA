#include <iostream>
using namespace std;
//num of sub array= nC2+n= n*(n+1)/2
//num of subsequences of an array= 2 power n

int main(){
int n;
cout<<"enter n: \n";
cin>>n;
int a[n];
cout<<"enter elem:";
for(int i=0;i<n;i++){
    cin>>a[i];
}
int curr_sum=0;
for(int i=0;i<n;i++){
    curr_sum=0;
    for(int j=i;j<n;j++){
            curr_sum+=a[j];
            cout<<curr_sum<<endl;

    }
}
return 0;
}
/*
enter n:
3
enter elem:1
2
2

1  index 0[1]
3  index 0[1 2]
5  index 0[1 2 2]
2  index 1[2]
4  index 1[2 2]
2  index 2[2]
*/
