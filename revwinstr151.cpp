#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0, right = 0, i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            if (i == n) break;
            while (i < n && s[i] != ' ') s[right++] = s[i++];
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        if (right > 0) s.resize(right - 1);
        else s.clear();

        return s;
    }
};

int main() {
    Solution sol;
    string s = "  the sky   is blue  ";
    cout << "Original: \"" << s << "\"" << endl;
    cout << "Reversed: \"" << sol.reverseWords(s) << "\"" << endl;
    return 0;
}
