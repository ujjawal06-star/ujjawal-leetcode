#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size(), vector<int>(matrix.size()));
        for (size_t r = 0; r < matrix.size(); r++) {
            for (size_t c = 0; c < matrix[0].size(); c++) {
                res[c][r] = matrix[r][c];
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6}};
    vector<vector<int>> ans = s.transpose(matrix);

    for (auto &row : ans) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
}
