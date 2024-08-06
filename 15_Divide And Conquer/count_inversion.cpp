/* a[i]>a[j] && i<j
Brute force approach (bf)

if a[i] is greater than a[j], then there are (mid – i) inversions.
because left and right sub arrays are sorted,
so all the remaining elements in left-sub array (a[i+1], a[i+2] … a[mid]) will be greater than a[j].
*/
#include <iostream>
using namespace std;
/*
int bf(int arr[],int n){
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inv++;
            }
        }
    }
    cout<<"No.of inversion are "<<inv;
}
*/
long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;    //4-1+1
    int n2=r-mid;     //8-4

    int a[n1];
    int b[n2]; //temp arrays

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
//k-> final array
    int i=0,j=0; //2 pointers
    int k=l; //low
    while(i<n1 && j<n2){ //only works when both have elem
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            inv+=n1-i; //[MAIN INCLUDE THIS]rem elem contribute to inv
            k++; j++;
        }
    }
    while(i<n1){
         arr[k]=a[i];
            k++; i++;
    }
    while(j<n2){
         arr[k]=b[j];
            k++; j++;
    }
    return inv;


}
long long mergesort(int arr[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
       inv+= mergesort(arr,l,mid);
        inv+= mergesort(arr,mid+1,r);

        inv+= merge(arr,l,mid,r);
    }
    return inv;
}

int main(){
     int arr[]={3,5,6,9,1,2,7,8};
    // bf(arr,8);
    cout<< mergesort(arr,0,7); //10
    return 0;
}


/*No.of inversion are 10
Time Complexity: O(N^2) Brute force approach

using Merge sort: O(nlogn) [there are log n levels, so the time complexity is O(n log n)]



*/
