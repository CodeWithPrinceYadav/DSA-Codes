#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return niceSubArray(nums, goal) - niceSubArray(nums, goal - 1);
    }

private:
    int niceSubArray(vector<int> &nums, int k){
        if(k < 0) return 0;

        int left = 0, sum = 0, count = 0;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right]%2;

            while(sum > k){
                sum -= nums[left]%2;
                left++;
            }

            count += (right - left + 1);
        }
        return count;
    }
};

int main(){
    vector<int> nums = {1,5,2,1,1};

    for (auto it : nums) cout << it << " ";

    int k = 2;
    cout << " and k is: " << k << endl;

    Solution obj;
    int ans = obj.numSubarraysWithSum(nums , k);

    cout << "Answer : " << ans;
}