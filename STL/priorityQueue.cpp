#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(6);        // max heap
    pq.push(59);
    pq.push(51);
    pq.push(34);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //minheap
    priority_queue<int, vector<int>, greater<int>>pqMin;
    pqMin.push(61);        // max heap
    pqMin.push(59);
    pqMin.push(5);
    pqMin.push(34);
    cout<<pqMin.top()<<endl; //pop operation same

    //size empty swap same
    
}
