#include <bits/stdc++.h>
using namespace std; 

class minStack {
private:
    stack<pair<int,int>> st;

public:
    void push(int value) {
        if (st.empty()) {
            st.push({value, value});
        } else {
            st.push({value, min(value, st.top().second)});
        }
    }

    int getMin() {
        return st.top().second;
    }

    int top() {
        return st.top().first;
    }

    void pop() {
        st.pop();
    }
};

int main() {
    minStack s;
    
    s.push(-2);
    s.push(0);
    s.push(-3);

    cout << s.getMin() << " ";  // -3
    s.pop();

    cout << s.top() << " ";     // 0
    s.pop();

    cout << s.getMin();         // -2
    
    return 0;
}