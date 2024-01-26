#include <iostream>
using namespace std;

void fib(int n){
int t1=0,t2=1,nextterm;
for(int i=0;i<n;i++){
cout<<t1<<endl;
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
return ;
}

int fact(int m){
int fa=1;
for(int i=2;i<=m;i++){
    fa=fa*i;
}
return fa;
}

int main(){
    cout<<"enter n to find fibonacci series: ";
    int n;
    cin>>n;
    fib(n);
    int m;
    cout<<"enter m to find factorial: ";
    cin>>m;
    int ans =fact(m);
    cout<<ans<<endl;
    cout<<"pascal triangle: ";
    int p;
    cin>>p;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

}
/*
enter n to find fibonacci series: 4
0
1
1
2
enter m to find factorial: 4
24
pascal triangle: 4
1
2 1
3 3 1
4 6 4 1
*/
