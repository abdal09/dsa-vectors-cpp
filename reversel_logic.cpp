#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// display function
void display(vector<int>& a){
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {1,2,3,4,5,6};

    // pehle original vector print
    display(v);

    // first 4 elements reverse
    reverse(v.begin(), v.begin() + 4);

    // reverse ke baad vector print
    display(v);
}


 //  for(int i = 0; i < v.size(); i++){
   // cout << v[i] << " ";

   /*Vector modify karna ho to
   for(int &x : v){
    x = 100;
}
*/
/* x:v-> x comes from v

“Vector v ke har element ko ek-ek karke x me daalo aur use print karo.
*/