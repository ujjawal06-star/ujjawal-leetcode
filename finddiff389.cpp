#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        for (int i = 0; i < s.size(); i++)
            t[i + 1] += t[i] - s[i];
        return t[t.size() - 1];
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t (with one extra character): ";
    cin >> t;

    char result = sol.findTheDifference(s, t);

    cout << "The extra character is: '" << result << "'" << endl;

    return 0;
}
