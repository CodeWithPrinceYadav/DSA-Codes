#include <bits/stdc++.h>
using namespace std;


vector<int> getpse(vector<int> &arr){
    int n = arr.size();
    vector<int> pse(n);
    stack<int> st;

    for(int i=0 ; i<n ; i++){
        while(!st.empty() && arr[st.top()] >=arr[i]){
            st.pop();
        }
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pse;
}


vector<int> getnse(vector<int> &arr){
    int n = arr.size();
    vector<int> nse(n);
    stack<int> st;

    for(int i=n-1 ; i>=0 ; i--){
        while(!st.empty() && arr[st.top()] >=arr[i]){
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse;
}

int areaOfHistogram(vector<int> &arr){
    int n = arr.size();
    vector<int>  nse = getnse(arr);
    vector<int>  pse = getpse(arr);
    int maxi = 0;
    for(int i=0 ; i<n ; i++){
        int area = arr[i] * (nse[i] - pse[i] -1);
        maxi = max(maxi, area);
    }
    return maxi;
};

int main(){
    vector<int> arr = {2,1,5,6,2,3};
    int ans = areaOfHistogram(arr);
    cout << ans;
    return 0;
}