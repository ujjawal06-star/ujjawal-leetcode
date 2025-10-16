#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";

        while (start < end) {
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }
            swap(word[start], word[end]);
            start++;
            end--;
        }

        return word;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string result = sol.reverseVowels(s);

    cout << "String after reversing vowels: " << result << endl;

    return 0;
}
