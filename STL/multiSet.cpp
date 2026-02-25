#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    for(auto x:ms) cout << x <<" ";
    cout<<endl;
    ms.erase(1);  //erase delete all 1's intend of that we use
    for(auto x:ms) cout << x <<" ";
    cout<<endl;

    //make new multiset
    multiset<int>ms1;
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(2);
    ms1.insert(2);
    ms1.insert(2);
    for(auto x:ms1) cout << x <<" ";
    cout<<endl;

    ms.erase(ms.find(1), ms.find(1)+2);
    for(auto x:ms1) cout << x <<" ";
    cout<<endl;
//error
}