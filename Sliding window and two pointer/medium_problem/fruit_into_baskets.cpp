#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen = 0;
        int lastfruit = -1, secondlastfruit = -1;
        int currcount = 0, lastfruitstreak = 0;

        for (int fruit : fruits) {
            if (fruit == lastfruit || fruit == secondlastfruit) {
                currcount++;
            } else {
                currcount = lastfruitstreak + 1;
            }

            if (fruit == lastfruit) {
                lastfruitstreak++;
            } else {
                lastfruitstreak = 1;
                secondlastfruit = lastfruit;
                lastfruit = fruit;
            }

            maxlen = max(maxlen, currcount);
        }

        return maxlen;
    }
};

int main() {
    Solution sol;
    vector<int> fruits = {1,2,1,2,3};
    cout << sol.totalFruit(fruits) << endl;
    return 0;
}