#include<iostream>
using namespace std;
bool getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
    }
int setbit(int n, int pos){
    return(n | (1<<pos));
}
int unique(int arr[],int n){
     int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getbit(arr[j],i)){ // i th bit is set or net
                sum++;
            }
        }
        if(sum%3!=0){
          result=setbit(result,i);
        }
    }
    cout<<result<<endl; //4
}
int main(){
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    unique(arr,10);
    return 0;
}
