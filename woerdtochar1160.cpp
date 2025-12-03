#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt[26] = {}, res = 0;
        for (auto ch : chars) ++cnt[ch - 'a'];
        for (auto &w : words) {
            int cnt1[26] = {}, match = true;
            for (auto ch : w)
                if (++cnt1[ch - 'a'] > cnt[ch - 'a']) {
                    match = false;
                    break;
                }
            if (match) res += w.size();
        }
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) cin >> words[i];
    string chars;
    cin >> chars;
    Solution obj;
    cout << obj.countCharacters(words, chars);
    return 0;
}
