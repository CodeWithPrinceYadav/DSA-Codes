#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mpp;
    map<int,pair<int,int>>mpp1;
    map<pair<int,int>,int>mpp2;

    mpp[1]=2;
    mpp.insert({6,9});
    mpp.insert({3,6});
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //access from a key
    cout<<mpp[3];
}