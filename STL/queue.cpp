#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(23);
    q.push(45);
    q.push(55);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.back() +=2;
    cout<<q.back()<<endl; 
    //size swap empty same

}