#include <iostream>
#include<math.h>
using namespace std;
int main(){
    //reverse
int n;
cout<<"enter n : ";
cin>>n;
int reverse=0;
while(n>0){
    int lastdigit=n%10;
    reverse=reverse*10+ lastdigit;
    n=n/10;
}
cout<<reverse<<endl;

//armstrong
int m;
cout<<"enter m:" ;
cin>>m;
int sum=0;
int original=m;
while(m>0){
    int last=m%10;
    sum+=pow(last,3);
    m=m/10;

}
if(original==sum){
        cout<<"armstrong";

}
else
    cout<<"not armstrong";

}

// contributed by VARIKUTI MADHURIMA
/*
enter n : 12345
54321
enter m:153
armstrong
*/
