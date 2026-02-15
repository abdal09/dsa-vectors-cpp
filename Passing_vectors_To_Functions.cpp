#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> a){
 a[0] = 100;
 for(int i=0; i<a.size(); i++){
      cout<<a[i]<<" ";
}
cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    //before call function
     for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
    } 
cout<<endl;

change(v);
//after function call
for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
}

}
