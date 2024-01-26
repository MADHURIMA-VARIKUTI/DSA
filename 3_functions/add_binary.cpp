#include<iostream>
using namespace std;

int i=0, sum[16];
//void addBinNums(int, int);
int main()
{
   long int bin_one, bin_two;
   cout<<"Enter First Binary Number: ";
   cin>>bin_one;
   cout<<"Enter Second Binary Number: ";
   cin>>bin_two;

   addBinNums(bin_one, bin_two);

   cout<<endl<<"Sum = ";
   while(i>=0)
      cout<<sum[i--];

   return 0;
}
void addBinNums(int b1, int b2)
{
   int r=0;
   while(b1 !=0 || b2 !=0)
   {
      sum[i++] = (b1 % 10 + b2 % 10 + r) % 2;
      r = (b1 % 10 + b2 % 10 + r) / 2;
      b1 = b1/10;
      b2 = b2/10;
   }
   if(r!=0)
      sum[i++] = r;
   i--;
}
