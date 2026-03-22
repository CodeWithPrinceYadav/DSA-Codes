#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerSets(vector<int> &num) {
    int n = num.size();
    int subsets = 1 << n;

    vector<vector<int>> ans;
    for (int mask = 0; mask < subsets; mask++) {
        vector<int> subset;

        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) {
                subset.push_back(num[j]);
            }
        }
        ans.push_back(subset);
    }
    return ans;
}

int main() {
    vector<int> num = {1, 2, 3};

    vector<vector<int>> ans = powerSets(num);

    for (auto &subset : ans) {
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}" << endl;
    }

    return 0;
}