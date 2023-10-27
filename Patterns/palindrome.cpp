#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

  for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++)
        cout<<" ";
    for(int j=1;j<=i;j++)
        cout<<j;
    for(int j=i-1;j>=1;j--)
        cout<<j;
cout<<endl;
  }

}
// contributed by VARIKUTI MADHURIMA
/*
Enter the number of rows: 5
    1
   121
  12321
 1234321
123454321
