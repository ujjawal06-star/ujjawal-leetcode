#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size(), total = m * n;
        if(r * c != total) return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i = 0; i < total; i++)
            ans[i / c][i % c] = mat[i / n][i % n];
        return ans;
    }
};

int main() {
    int m,n,r,c;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> mat[i][j];
    cin >> r >> c;
    Solution obj;
    vector<vector<int>> res = obj.matrixReshape(mat,r,c);
    for(auto &row:res){
        for(int x:row) cout << x << " ";
        cout << endl;
    }
    return 0;
}
