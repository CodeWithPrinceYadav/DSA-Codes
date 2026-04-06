#include<bits/stdc++.h>
using namespace std;

string prefix2postfix(string s){
    stack<string> st;
    
   for (int i = s.length() - 1; i >= 0 ; i--) {   // 
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            st.push(string(1,c));
            }

        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            st.push(t1 + t2 + string(1,c));
        }
    }
    return st.top();
}

int main() {
    string exp = "/-AB*+DEF";
    cout << "prefix expression: " << exp << endl;
    string ans = prefix2postfix(exp);
    cout<<"postfix expression: "<< ans << endl;
    return 0;
}