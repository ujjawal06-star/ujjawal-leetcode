#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size() - 1;
        while (idx >= 0) {
            if (digits[idx] == 9) {
                digits[idx] = 0;
            } else {
                digits[idx] += 1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits = {9, 9, 9}; // Example input

    cout << "Original number: ";
    for (int d : digits) cout << d;
    cout << endl;

    vector<int> ans = s.plusOne(digits);

    cout << "After adding one: ";
    for (int d : ans) cout << d;
    cout << endl;

    return 0;
}
