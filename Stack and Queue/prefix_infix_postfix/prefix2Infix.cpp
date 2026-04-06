#include<bits/stdc++.h>
using namespace std;

string prefix2Infix(string prefix){
    stack<string> st;
    int n = prefix.length();
   
    for (int i = n-1; i < prefix.length(); i--) {
        char c = prefix[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            st.push(string(1,prefix[i]));
            }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con = "(" + t1 + prefix[i] +t2 + ")";
            st.push(con);
        }
    }
    return st.top();
}

int main() {
    string exp = "*+PQ-MN";
    cout << "prefix expression: " << exp << endl;
    string ans = prefix2Infix(exp);
    cout<<"In expression"<<ans << endl;
    return 0;
}