#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        unsigned int rev = 0;
        int num = x;

        while (num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return (rev == (unsigned int)x);
    }
};

int main() {
    Solution s;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (s.isPalindrome(x)) {
        cout << x << " is a palindrome number." << endl;
    } else {
        cout << x << " is not a palindrome number." << endl;
    }

    return 0;
}
