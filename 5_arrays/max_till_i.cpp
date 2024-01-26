#include <iostream>
using namespace std;

int main(){
long int mx=-19999999;
int n;
cout<<"enter n: ";
cin>>n;
int a[n];
cout<<"enter elem: \n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    mx=max(mx,a[i]);
    cout<<mx<<endl;
}
return 0;
}
/*
enter n: 5
enter elem:
0
-9
1
3
-2
0
0
1
3
3
*/
