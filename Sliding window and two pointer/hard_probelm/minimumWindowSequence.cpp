#include <iostream>
#include <string>
#include <climits>
using namespace std;

string minWindowSubsequence(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();

    int minLen = INT_MAX;
    int startIndex = -1;

    int i = 0;

    while (i < n) {
        int j = 0;

        while (i < n) {
            if (s1[i] == s2[j]) {
                j++;
                if (j == m)
                    break;
            }
            i++;
        }

        if (i == n)
            break;

        int end = i + 1;
        j = m - 1;

        while (j >= 0) {
            if (s1[i] == s2[j]) {
                j--;
            }
            i--;
        }

        i++;
        int windowLen = end - i;

        if (windowLen < minLen) {
            minLen = windowLen;
            startIndex = i;
        }

        i = i + 1;
    }

    if (startIndex == -1)
        return "";

    return s1.substr(startIndex, minLen);
}

int main() {
    string s1 = "abcdebdde";
    string s2 = "bde";

    cout << minWindowSubsequence(s1, s2);

    return 0;
}