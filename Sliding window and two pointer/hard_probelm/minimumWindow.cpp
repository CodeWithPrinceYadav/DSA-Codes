#include <bits/stdc++.h>
using namespace std;

string minimumWindow(string s, string t) {
    int n = s.size(), m = t.size();
    int l = 0, r = 0, minLen = INT_MAX, startIndex = -1, count = 0;

    vector<int> hash(256, 0);

    for (int i = 0; i < m; i++) {
        hash[t[i]]++;
    }

    while (r < n) {
        if (hash[s[r]] > 0) {
            count++;
        }
        hash[s[r]]--;

        while (count == m) {
            if (r - l + 1 < minLen) {
                minLen = r - l + 1;
                startIndex = l;
            }

            hash[s[l]]++;
            if (hash[s[l]] > 0) {
                count--;
            }
            l++;
        }
        r++;
    }
    if (startIndex == -1) return "";
    return s.substr(startIndex, minLen);
}

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << minimumWindow(s, t) << endl;

    return 0;
}