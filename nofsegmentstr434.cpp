#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                while (i < n && s[i] != ' ')
                    i++;
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "Number of segments: " << sol.countSegments(s) << endl;
    return 0;
}
