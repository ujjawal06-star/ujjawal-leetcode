#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        if (s == goal) {
            set<char> st(s.begin(), s.end());
            return st.size() < s.size();
        }

        int i = 0, j = s.size() - 1;

        while (i < s.size() && s[i] == goal[i]) i++;
        while (j >= 0 && s[j] == goal[j]) j--;

        if (i >= j) return false;

        swap(s[i], s[j]);

        return s == goal;
    }
};

int main() {
    Solution obj;
    cout << obj.buddyStrings("ab", "ba");
}
