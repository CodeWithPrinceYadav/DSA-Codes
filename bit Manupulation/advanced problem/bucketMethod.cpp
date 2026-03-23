#include <bits/stdc++.h>
using namespace std;

int bucket(vector<int> &arr){
    int ones = 0;
    int twos = 0;
    int n = arr.size();
    for(int i=0 ; i<n ; i++){
        ones = (ones ^ arr[i]) & ~twos;
        twos = (twos ^ arr[i]) & ~ones;
    }
    return ones;
}

int main(){
    vector<int>arr = {2,2,4,4,4,6,2};
    int ans=bucket(arr);
    cout<<"Single Value is: "<<ans;
}