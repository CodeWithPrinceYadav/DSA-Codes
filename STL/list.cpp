#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(2);
    ls.push_back(6);
    ls.push_back(5);
    for(auto x:ls) cout<<x<<" ";
    cout<<endl;

    ls.push_front(12);
    ls.push_front(62);
    ls.push_front(96);
    for(auto x:ls) cout<<x<<" ";
    cout<<endl;
//rest functions are sa,\me as vector
//deque is same 
}