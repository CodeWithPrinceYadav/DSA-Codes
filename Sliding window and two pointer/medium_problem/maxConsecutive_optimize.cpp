#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &nums, int k ){
    int l=0 , r=0 , zero=0, maxlen=0;
    int n = nums.size();

    while(r<n){
        if(nums[r]==0) zero++;
        while(zero>k){
            if(nums[l] == 0) zero--;
            l++;
        }
        maxlen = max(maxlen, r-l+1);
        r++;
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