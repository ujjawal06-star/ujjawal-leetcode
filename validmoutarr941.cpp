#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int n = A.size(), i = 0, j = n - 1;
        while (i + 1 < n && A[i] < A[i + 1]) i++;
        while (j > 0 && A[j - 1] > A[j]) j--;
        return i > 0 && i == j && j < n - 1;
    }
};

int main() {
    Solution s;
    vector<int> A = {0, 3, 2, 1};
    cout << s.validMountainArray(A);
}
