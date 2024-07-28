//Avoid duplicates
#include<iostream>
#include<algorithm>
using namespace std;
// string using 'std::next_permutation'
void permutations(string str){
    if(str.length()==0){
        return;
    }
    while(1){
        //print the current permutation
        cout<<str<<" ";
        if(!next_permutation(str.begin(),str.end())){
            break;
        }
    }
}

int main(){
    string str="BCDA";
    permutations(str);
    permutations("ADC");
    permutations("ACC");
     permutations("BCA");
    return 0;
}

/*
BCDA BDAC BDCA CABD CADB CBAD CBDA
CDAB CDBA DABC DACB DBAC DBCA DCAB DCBA

 ADC CAD CDA DAC DCA

 ACC CAC CCA

 BCA CAB CBA
*/
