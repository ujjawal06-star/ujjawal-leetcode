#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while (columnNumber > 0) {
            columnNumber--;
            res = char((columnNumber % 26) + 'A') + res;
            columnNumber /= 26;
        }
        return res;        
    }
};

int main() {
    Solution obj;
    int n = 705; // Example input
    cout << obj.convertToTitle(n);
    return 0;
}
