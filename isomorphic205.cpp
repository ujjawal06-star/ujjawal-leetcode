#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> indexS(200, 0);
        vector<int> indexT(200, 0);
        int len = s.length();
        if (len != t.length()) {
            return false;
        }
        for (int i = 0; i < len; i++) {
            if (indexS[s[i]] != indexT[t[i]]) {
                return false;
            }
            indexS[s[i]] = i + 1;
            indexT[t[i]] = i + 1;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    bool result = sol.isIsomorphic(s, t);

    if (result)
        cout << "The strings are isomorphic." << endl;
    else
        cout << "The strings are NOT isomorphic." << endl;

    return 0;
}
