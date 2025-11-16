#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> count;

        // convert paragraph into lowercase words (non-letters -> space)
        for (auto &c : p)
            c = isalpha(c) ? tolower(c) : ' ';

        istringstream iss(p);
        string w;
        pair<string, int> res("", 0);

        while (iss >> w) {
            if (ban.find(w) == ban.end()) {
                int freq = ++count[w];
                if (freq > res.second) {
                    res = {w, freq};
                }
            }
        }
        return res.first;
    }
};

int main() {
    Solution sol;
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};

    cout << sol.mostCommonWord(paragraph, banned);
    return 0;
}
