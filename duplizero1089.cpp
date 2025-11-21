#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& A) {
        int n = A.size(), j = n + count(A.begin(), A.end(), 0);
        for (int i = n - 1; i >= 0; --i) {
            if (--j < n)
                A[j] = A[i];
            if (A[i] == 0 && --j < n)
                A[j] = 0;
        }
    }
};

int main() {
    Solution s;
    vector<int> A = {1,0,2,3,0,4,5,0};
    s.duplicateZeros(A);
    for(int x : A) cout << x << " ";
}
