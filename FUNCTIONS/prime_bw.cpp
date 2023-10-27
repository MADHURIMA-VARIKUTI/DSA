#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        return true;
    }
}
int main(){
int a,b;
cout<<"enter a and b ";
cin>>a>>b;
cout<<"prime numbers are"<<endl;
for(int i=a;i<b;i++){
    if(isprime(i)){
        cout<<i<<endl;
    }
}
}
//contributed by VARIKUTI MADHURIMA
/*
enter a and b 3
9
prime numbers are
5
7
*/
