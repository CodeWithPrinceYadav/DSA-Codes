#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;  //in stack only three only three operation
    st.push(5);    //are done push, pop, top
    st.push(62);
    st.push(95);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size();
  
}