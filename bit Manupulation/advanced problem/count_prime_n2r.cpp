#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> primesInRange(vector<vector<int>>& queries) {
        if (queries.empty()) return {};

        int maxVal = 0;
        for (auto &q : queries) {
            maxVal = max(maxVal, q[1]);
        }

        vector<bool> isPrime(maxVal + 1, true);
        if (maxVal >= 0) isPrime[0] = false;
        if (maxVal >= 1) isPrime[1] = false;

        for (int i = 2; i * i <= maxVal; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= maxVal; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> prefix(maxVal + 1, 0);
        for (int i = 1; i <= maxVal; i++) {
            prefix[i] = prefix[i - 1] + (isPrime[i] ? 1 : 0);
        }

        vector<int> result;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            if (l == 0) result.push_back(prefix[r]);
            else result.push_back(prefix[r] - prefix[l - 1]);
        }

        return result;
    }
};

int main() {
    int n;
    cin >> n;

    vector<vector<int>> queries(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    Solution sol;
    vector<int> ans = sol.primesInRange(queries);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}