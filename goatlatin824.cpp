#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toGoatLatin(string S) {
        unordered_set<char> vowel({'a','e','i','o','u','A','E','I','O','U'});
        istringstream iss(S);
        string res, w;
        int i = 0;
        while (iss >> w) {
            if (vowel.count(w[0]))
                res += " " + w;
            else
                res += " " + w.substr(1) + w[0];
            res += "ma";
            res += string(++i, 'a');
        }
        return res.substr(1);
    }
};

int main() {
    Solution sol;
    string s;
    getline(cin, s);
    cout << sol.toGoatLatin(s);
    return 0;
}
