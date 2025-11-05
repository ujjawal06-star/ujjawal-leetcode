#include<iostream>
#include<vector>
using namespace std;
class SpiralMat{
    public:
        void printSpiral(vector<vector<int>>& mat){
            int m=mat.size(), n=mat[0].size();
            int sr=0, sc=0, er=m-1, ec=n-1;
            //s=start, r=row, e=end, c=column, mat=matrix;
            vector<int> ans;
            while(sr<=er && sc<=ec){
                for(int j=sc; j<=ec;j++){
                    //top
                    ans.push_back(mat[sr][j]);
                }
                for(int i=sr+1; i<=er; i++){
                    //right
                    ans.push_back(mat[i][ec]);
                }
                for(int j=ec-1; j>=sc; j--){
                    //bottom
                    if(sr==er){
                        break;
                    }
                    ans.push_back(mat[er][j]);
                }
                for(int i=er-1; i>=sr+1; i--){
                    //left
                    if(sc==ec){
                        break;
                    }
                    ans.push_back(mat[i][sc]);
                }
                sr++, sc++, er--, ec--;
            }
            for(int i=0; i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
        }
};
int main(){
    SpiralMat smat;
    vector<vector<int>> mat{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    smat.printSpiral(mat);
    return 0;
}