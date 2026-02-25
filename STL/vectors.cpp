#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(10);
    v.push_back(5);
    v.emplace_back(12);
    v.push_back(56);
    for(int x:v) cout<<x<<" ";
    cout<<endl;
    cout<<v[1]<<endl;

    vector<int>v2(5,100);
    for(int x:v2) cout<<x<<" "; 
    cout<<endl;  
    
    vector<int>v3(v2);
    for(int x:v3) cout<<x<<" ";
    cout<<endl;

    //iterators  using vector v
    vector<int>::iterator it= v.begin();
    it++;
    cout<< *(it) <<endl;

    it= v.end();
    it--;
    cout<< *(it) <<endl;

    for (auto it=v.begin() ; it!=v.end() ; it++){  
        cout<< *(it)<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1,v.begin()+5);
    for(auto x:v) cout<<x<<" ";
    cout<<endl;

    //insert in vector
    v.insert(v.begin()+1,2,300);
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
      
    cout<<v.size()<<endl;  // size of vec
    v.pop_back();  //pop value   it is from last
    for(auto x:v) cout<<x<<" ";
    cout<<endl;


}
