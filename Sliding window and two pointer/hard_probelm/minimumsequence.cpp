#include <bits/stdc++.h>
using namespace std;

string minWindow(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    int minLen = INT_MAX;
    int startIndex = -1;

    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[0]) {
            int j = 0, k = i;

            while (k < n && j < m) {
                if (s1[k] == s2[j]) j++;
                k++;
            }

            if (j == m) {
                int end = k - 1;
                j = m - 1;
                k = end;

                while (j >= 0) {
                    if (s1[k] == s2[j]) j--;
                    k--;
                }

                k++;

                if (end - k + 1 < minLen) {
                    minLen = end - k + 1;
                    startIndex = k;
                }
            }
        }
    }

    return (startIndex == -1) ? "" : s1.substr(startIndex, minLen);
}

int main() {
    string s1 = "abcdebdde";
    string s2 = "bde";
    cout << minWindow(s1, s2);
    return 0;
}