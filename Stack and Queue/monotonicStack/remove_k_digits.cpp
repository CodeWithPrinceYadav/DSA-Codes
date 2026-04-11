#include <bits/stdc++.h>
using namespace std;

string removeKElement(string nums, int k ){
    stack<char> st;
    int n = nums.length();

    for(int i = 0; i < n; i++){
        
        while(!st.empty() && k > 0 && st.top() > nums[i]){
            st.pop();
            k--;
        }
        st.push(nums[i]); 
    }

    while(k > 0 && !st.empty()){
        st.pop();
        k--;
    }

    string result = "";
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main(){
    string nums = "1432219";
    int k = 3;

    string ans = removeKElement(nums,k);
    cout << "Smallest number is: " << ans << endl;
}