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

int maximumReactangle(vector<vector<char>> &matrix){
    if(matrix.empty()) return 0;

    int m = matrix[0].size();
    vector<int> height (m,0);
    int maxArea = 0;

    for(auto &row : matrix){
        for(int i=0 ; i<m ; i++){
            if(row[i]=='1') height[i]++;
            else height[i] = 0;       
        }
        maxArea=max(maxArea,areaOfHistogram(height));
    }
    return maxArea;
}

int main(){
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    int ans = maximumReactangle(matrix);
    cout << ans;
    return 0;
}