#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        bool searchinrow(vector<vector<int>>& mat, int tar, int row){
            int n = mat[0].size();
            int st=0, end = n-1;
            while (st<=end){
                int mid= st+(end-st)/2;
                if(tar==mat[row][mid]){
                    return true;
                }
                else if(tar<mat[row][mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            return false;
        }
        bool matsearch(vector<vector<int>> &mat, int tar){
            int m = mat.size(), n = mat[0].size();
            int stRow=0, endRow=m-1;
            while(stRow<=endRow){
                int midRow= stRow+(endRow-stRow)/2;
                if(tar>=mat[midRow][0] && tar<=mat[midRow][n-1]){
                    //found in this row
                    return searchinrow(mat, tar, midRow);
                }
                else if(tar>mat[midRow][n-1]){
                    stRow=midRow+1;
                }
                else{
                    endRow=midRow-1;
                }
            }
        }
};
int main(){
    Solution sol;
    vector<vector<int>> mat{{1,2,3},{4,5,6},{7,8,9}};
    cout<<sol.matsearch(mat, 7);
    return 0;
}