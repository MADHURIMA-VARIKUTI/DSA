#include<iostream>
using namespace std;

void primefactor(int n){
    int spf[n+1]={0};
    for(int i=0;i<=n;i++){
        spf[i]=i; //same number itself
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){ //unmarked
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){ //if unmarked
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
}

/*
30
2 3 5

30/2[spf]= 15    15/3[spf]=5     5/5[spf]=1

Time Complexity for factorization: O(log n)
*/
