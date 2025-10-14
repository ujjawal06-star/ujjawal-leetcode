#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length++;
            }
            else if (counting) {
                break;
            }
        }
        
        return length;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int result = sol.lengthOfLastWord(s);
    cout << "Length of last word: " << result << endl;

    return 0;
}
