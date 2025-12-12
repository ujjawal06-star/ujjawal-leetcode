#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        unsigned int ourNum = num;
        string str;
        char arr[17] = "0123456789abcdef";
        do {
            str += arr[ourNum % 16];
            ourNum /= 16;
        } while (ourNum);
        return {str.rbegin(), str.rend()};
    }
};

int main() {
    Solution s;
    int num;
    cin >> num;
    cout << s.toHex(num) << endl;
    return 0;
}
