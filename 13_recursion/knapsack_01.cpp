#include<iostream>
using namespace std;

int knapsack(int value[],int wt[],int n,int c){
    if(n==0 || c==0){
        return 0;
    }
    if(wt[n-1]>c){ //if weight > capacity don't include
        return knapsack(value,wt,n-1,c);
    }
    return max(knapsack(value,wt,n-1,c-wt[n-1]) + value[n-1],knapsack(value,wt,n-1,c));
    //     max(include                                      ,  not include)
    //                           reduce capacity & add value
}
int main(){
int value[]={1,2,3,4,5};
int wt[]={10,20,30,40,50};
cout<<knapsack(value,wt,5,120)<<endl;
//c=120
}

/*
12
30+40+50=3+4+5=12
Time Complexity: O(2^n)

*/
