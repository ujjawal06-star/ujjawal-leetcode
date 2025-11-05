#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        bool matsearch(vector<vector<int>> &mat, int tar){
            int m = mat.size(), n = mat[0].size();
            int r=0, c=n-1;
            while(r>=0 && c<m){
                if(tar==mat[r][c]){
                    return true;
                }
                else if(tar<mat[r][c]){
                    c--;
                }
                else{
                    r++;
                }
            }
            return false;
        }
};
int main(){
    Solution sol;
    vector<vector<int>> mat{{1,2,3},{4,5,6},{7,8,9}};
    cout<<sol.matsearch(mat, 7);
    return 0;
}