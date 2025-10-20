#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length()) {
            if (s[sp] == t[tp]) {
                sp++;
            }
            tp++;
        }

        return sp == s.length();
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter string s (subsequence): ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    bool result = sol.isSubsequence(s, t);

    if (result)
        cout << s << "' is a subsequence of '" << t << "'." << endl;
    else
        cout << s << "' is NOT a subsequence of '" << t << "'." << endl;

    return 0;
}
