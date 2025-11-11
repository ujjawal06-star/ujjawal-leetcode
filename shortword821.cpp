#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size(), pos = -n;
        vector<int> res(n, n);
        for (int i = 0; i < n; ++i) {
            if (S[i] == C) pos = i;
            res[i] = i - pos;
        }
        for (int i = pos - 1; i >= 0; --i) {
            if (S[i] == C) pos = i;
            res[i] = min(res[i], pos - i);
        }
        return res;
    }
};

int main() {
    Solution obj;
    string S = "loveleetcode";
    char C = 'e';
    vector<int> ans = obj.shortestToChar(S, C);
    for (int x : ans) cout << x << " ";
    return 0;
}
