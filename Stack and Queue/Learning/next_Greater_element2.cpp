#include<bits/stdc++.h>
using namespace std;

vector<int> nextGenerator(vector<int> &nums){
    stack<int> st;
    int n = nums.size();
    vector<int> ans(n);

    for(int i = 2*n-1; i >= 0; i--){
        int ind = i % n;
        int currEle = nums[ind];

        while(!st.empty() && st.top() <= currEle){
            st.pop();
        }

        if(i < n){
            if(st.empty()) ans[ind] = -1;
            else ans[ind] = st.top();
        }

        st.push(currEle);
    }

    return ans;
}

int main(){
    vector<int> arr = {6,0,8,1,3};
    vector<int> ans = nextGenerator(arr);

    for(int x: ans){
        cout << x << " ";
    }
    cout << endl;
}