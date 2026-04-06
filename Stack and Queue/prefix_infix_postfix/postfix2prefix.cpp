#include<bits/stdc++.h>
using namespace std;

string postfix2prefix(string s){
    stack<string> st;
    
   for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            st.push(string(1,c));
            }

        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            st.push(string(1,c) + t2 + t1);
        }
    }
    return st.top();
}

int main() {
    string exp = "AB-DE+F*/";
    cout << "postfix expression: " << exp << endl;
    string ans = postfix2prefix(exp);
    cout<<"prefix expression"<< ans << endl;
    return 0;
}