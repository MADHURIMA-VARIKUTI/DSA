//0 1 2 sort [Dutch National Flag problem]
#include <iostream>
using namespace std;

void dnfsort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int arr[]={1,1,2,0,0,1,2,2,1,0};
    dnfsort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;

    return 0;
}
/*0001111222
TC: O(n) //in each operation either it is inc or dec
*/
