#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long x = 0;

        for (int i = 0; i < n; i++) {
            x ^= nums[i];
        }

        int rightmost = (x & (x - 1)) ^ x;

        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] & rightmost) {
                a ^= nums[i];
            } else {
                b ^= nums[i];
            }
        }

        if (a < b) return {a, b};
        return {b, a};
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 2};

    Solution sol;
    vector<int> result = sol.singleNumber(nums);

    cout << "Single numbers: " << result[0] << " and " << result[1];

    return 0;
}