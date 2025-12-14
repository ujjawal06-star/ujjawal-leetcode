#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        sort(candyType.begin(), candyType.end());
        int distinct = 1;
        for (int i = 1; i < n; i++) {
            if (candyType[i] != candyType[i - 1])
                distinct++;
        }
        return min(distinct, n / 2);
    }
};

int main() {
    Solution sol;
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    cout << sol.distributeCandies(candyType);
    return 0;
}
