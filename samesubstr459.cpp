#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                string substring = s.substr(0, i);
                string repeated = "";
                for (int j = 0; j < n / i; ++j) {
                    repeated += substring;
                }
                if (repeated == s) return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << (sol.repeatedSubstringPattern(s) ? "True" : "False") << endl;
    return 0;
}
