#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26] = {0};
        for (char c : s)
            hash[c - 'a']++;
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};
int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int result = sol.firstUniqChar(s);
    if (result != -1)
        cout << "The first unique character is '" << s[result] << "' at index " << result << "." << endl;
    else
        cout << "No unique character found." << endl;
    return 0;
}
