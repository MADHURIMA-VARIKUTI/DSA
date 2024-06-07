#include<iostream>
using namespace std;

void primesieve(int n){
    int prime[n+1]={0};

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
// for 5 start from 25[i*i] bcoz lowest digits covers all till i^2
// and increment by 5 i.e,, +i
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            cout<<i<< " ";
        }
    }
    cout<<endl;
}

int main(){
 int n;
 cout<<"enter n : ";
 cin>>n;

 primesieve(n);

 return 0;
}

/*
enter n : 30
2 3 5 7 11 13 17 19 23 29

Time Complexity: O(n log log n)
*/
