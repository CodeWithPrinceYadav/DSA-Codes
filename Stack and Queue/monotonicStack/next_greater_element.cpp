#include<bits/stdc++.h>
using namespace std;

vector<int> nextGenerator(vector<int> &nums){
    stack<int> st;
    int n = nums.size();
    vector<int> res(n);

    for(int i = n-1; i>=0; i--){
        while(!st.empty() && st.top() <= nums[i]){ 
            st.pop();
        }
        if(st.empty()) res[i] = -1 ;
        else res[i] = st.top();

        st.push(nums[i]);   
    }
    return res;
}

int main(){
    vector<int> arr= {6,0,8,1,3};
    vector<int> ans = nextGenerator(arr);

    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
}