#include<bits/stdc++.h>
using namespace std;

void swap(int *m,int *n){
int temp=*m;
 *m=*n;
 *n=temp;
}
int main(){
int a=10;
int* aptr=&a;
cout<<*aptr<<endl; //10
 //dereferences the value stored at the address
*aptr =20;
cout<<a<<endl;  //20

int arr[]={1,2,3,4,5};
cout<<*arr<<endl;  //1

int *ptr=arr;
for(int i=0;i<3;i++){
    cout<<*ptr<<endl;  //1 2 3
    ptr++;
}

for(int i=0;i<3;i++){
    cout<<*(arr+i)<<endl;  //1 2 3
    ptr++;
}

//pointer to pointer
int o=15;
int *p;
p=&o;
cout<<*p<<endl; //15
int **q=&p;
cout<<*q<<endl; //0x61fddc
cout<<**q<<endl; //15

//passing pointers to functions
int m=5;
int n=7;

swap(&m,&n);
cout<<m<<" "<<n<<endl; //7 5
return 0;
}
