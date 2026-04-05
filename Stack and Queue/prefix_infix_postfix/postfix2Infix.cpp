#include<bits/stdc++.h>
using namespace std;

string postfix2Infix(string postfix){
    stack<string> st;
    int n = postfix.length();
   
    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            st.push(string(1,postfix[i]));
            }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con = "(" + t2 + postfix[i] +t1 + ")";
            st.push(con);
        }
    }
    return st.top();
}

int main() {
    string exp = "AB-DE+F*/";
    cout << "postfix expression: " << exp << endl;
    string ans = postfix2Infix(exp);
    cout<<"Infix expression"<<ans << endl;
    return 0;
}