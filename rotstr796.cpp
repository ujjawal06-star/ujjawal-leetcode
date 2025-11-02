#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string temp = s + s;
        return temp.find(goal) != string::npos;
    }
};

int main() {
    Solution obj;
    string s = "abcde", goal = "cdeab";
    cout << (obj.rotateString(s, goal) ? "true" : "false");
    return 0;
}
