#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> &num) {
    int n = num.size();
    int xr = 0;
    for(int i = 0 ; i<n ; i++){
        xr = xr ^ num[i];
    }
    return xr;
}

int main() {
    vector<int> num = {4,1,2,1,2};
    int sol = findUnique(num);
    cout<<"Unique Element: "<<sol;
}