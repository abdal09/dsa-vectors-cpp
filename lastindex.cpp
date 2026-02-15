#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(100);
    v.push_back(99);
    v.push_back(7);
    v.push_back(11);
    v.push_back(112);
    v.push_back(199);
    // 7 elements-> 7 size
    int x=1;
    int idx = -1;

    //for(int i=0; i<v.size(); i++ ){
    //if (v[i]==x) idx = i;

    for(int i=v.size()-1; i>=0; i-- ){
        if (v[i]==x){
           idx = i;  
        
        break;
    }
}
    cout<<idx;

}