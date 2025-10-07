#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers palindrome नहीं होते
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
    int x = 121; // Example input

    cout << "Number: " << x << endl;

    if (s.isPalindrome(x)) {
        cout << "It is a palindrome number." << endl;
    } else {
        cout << "It is not a palindrome number." << endl;
    }

    return 0;
}
