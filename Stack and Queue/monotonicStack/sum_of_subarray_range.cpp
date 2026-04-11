#include <bits/stdc++.h>
using namespace std;

long long subarrayRange(vector<int> &arr){
    int n = arr.size();
    long long sum = 0;

    for(int i =0 ; i<n ; i++){
        int smallest = arr[i];
        int largest = arr[i];

        for(int j=i ; j<n ; j++){
            smallest = min(smallest, arr[j]);
            largest = max(largest , arr[j]);

            sum += (largest - smallest);
        }
    }
    return sum;
}

int main(){
    vector<int> arr = {1, 4, 3, 2};  // ✅ fixed
    long long ans = subarrayRange(arr); // also better to use long long
    cout << ans;
}