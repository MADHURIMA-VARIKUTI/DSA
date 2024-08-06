//Google n amazon
// H L H L
#include <iostream>
using namespace std;

void wavesort(int arr[],int n){
    for(int i=1;i<n;i+=2){ //jump 2 elem
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]>arr[i+1] &&i<=n-2){
            swap(arr[i],arr[i+1]);
        }



        }
    }

int main(){
    int arr[]={1,3,4,7,5,6,2};
    wavesort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;

    return 0;
}
/*3174625
TC: O(n/2) i.e.. O(n)
*/
