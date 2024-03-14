#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
string str;
string str1(5,'n');
cout<<str1<<endl;    //nnnnn

string str2;
getline(cin,str2);
cout<<str2<<endl;   //madhu apna college

string s1="fam";
string s2="ily";
cout<<s1+s2<<endl;  //family

s1.append(s2);
cout<<s1<<endl;     //family
cout<<s1[1]<<endl;  //a

string s3="madhurima mahathi";
cout<<s3<<endl;   //madhurima mahathi
s3.erase(3,3);    //madima mahathi
cout<<s3<<endl;

s3.clear();
cout<<s3<<endl;     //

cout<<s1.compare(s2)<<endl; //-1 [fam <ily]

cout<<s1.find("am")<<endl;  //1

cout<<s1.insert(3,"rsmm")<<endl; //famrsmmily

cout<<s1.size()<<endl; //10

cout<<s1.substr(3,4);  //rsmm

string s4="9030";
int x = stoi(s4);
cout<< x+2 <<endl;

int y=143;
cout<<to_string(y)+"5"<<endl;
return 0;

string z="jbfgdsuol";
sort(z.begin(),z.end());
cout<< z<<endl;


}
