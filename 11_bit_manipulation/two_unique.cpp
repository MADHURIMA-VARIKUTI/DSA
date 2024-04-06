#include<iostream>
using namespace std;
int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1) {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1; // to move to next pos
    }
    int newxor = 0;
    for (int i = 0; i < n; i++) {
        if (setBit(arr[i], pos - 1)) {
            newxor = newxor ^ arr[i];   // one of the unique num
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl; //another unique num
}
int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    unique(arr, 8);
    return 0;
}

/*
7
5

7=0111
5=0101
xorsum= 0010
xor all where 1 bit second at 1st pos _ _
we'll get one unique number newxor =7
xorsum ^ newxor =another unique num =5

*/
