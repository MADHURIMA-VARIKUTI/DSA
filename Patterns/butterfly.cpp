#include <iostream>
using namespace std;
//butterfly pattern
int main(){
int n;
cout<<"enter n: ";
cin>>n;
int i,j;

for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
int spaces=2*n-2*i;
        for(int j=1;j<spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
}
for(i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
int spaces=2*n-2*i;
        for(int j=1;j<spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
}
}
// contributed by VARIKUTI MADHURIMA
/*
enter n: 5
*       *
**     **
***   ***
**** ****
**********
**********
**** ****
***   ***
**     **
*       *

*/
