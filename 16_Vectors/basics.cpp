#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }//153

    //Iterator

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it; //pointer
    }//153

    for(auto element :v){
        cout<<element;
    } //153

    vector<int> v2(3,50);
    swap(v,v2);
    v.pop_back(); //1 5
     for(auto element :v){
        cout<<element;
    } //15


     for(auto element :v2){
        cout<<element;
    }  // 50 50 50

    vector<int> v3{ 1, 5, 8, 9, 6, 0 };
    sort(v3.begin(), v3.end());
     for(auto elem :v3){
        cout<<elem;
    } //015689

    int mx= *max_element(v3.begin(),v3.end());
    cout<<mx; //9

    int mn= *min_element(v3.begin(),v3.end());
    cout<<mn; //0



    pair<int,char>p;
    p.first=3;
    p.second='a';


}
