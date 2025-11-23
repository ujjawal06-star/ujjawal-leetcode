#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        sort(words.begin(), words.end());
        
        for (char c : words[0]) {
            bool common = true;
            for (int i = 1; i < words.size(); i++) {
                size_t pos = words[i].find(c);
                if (pos == string::npos) {
                    common = false;
                    break;
                } else {
                    words[i].erase(pos, 1);
                }
            }
            if (common) res.push_back(string(1, c));
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<string> words = {"bella","label","roller"};
    vector<string> ans = s.commonChars(words);
    for (auto &x : ans) cout << x << " ";
}
