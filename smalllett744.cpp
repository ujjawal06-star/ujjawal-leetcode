#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (letters[mid] <= target) l = mid + 1;
            else r = mid - 1;
        }
        return letters[l % n];
    }
};

int main() {
    int n;
    cin >> n;
    vector<char> letters(n);
    for (int i = 0; i < n; i++) cin >> letters[i];
    char target;
    cin >> target;

    Solution obj;
    cout << obj.nextGreatestLetter(letters, target);
    return 0;
}
