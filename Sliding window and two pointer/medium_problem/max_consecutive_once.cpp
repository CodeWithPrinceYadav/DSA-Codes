#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &nums, int k ){
    int len = 0, maxlen = 0;
    int n=nums.size();
    for(int i = 0 ; i<n; i++ ){
        int zero = 0;
        for(int j=i ; j<n ; j++){
            if(nums[j] ==0){
                zero ++;
            }
            if(zero<=k){
                len = j-i+1;
                maxlen = max(maxlen, len);
            }
            else break;
        }
    }
    return maxlen;
}

int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    cout << "Array: ";
    for(int x : nums) cout << x << " ";
    cout << "\nk: " << k << endl;

    int ans = maxConsecutive(nums, k);
    cout << "Answer: " << ans;
}