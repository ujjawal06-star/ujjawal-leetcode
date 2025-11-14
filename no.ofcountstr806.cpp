#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum = 0, c = 1;
        for (int i = 0; i < s.size(); i++) {
            sum += widths[s[i] - 'a'];
            if (sum > 100) {
                c++;
                sum = widths[s[i] - 'a'];
            }
        }
        return {c, sum};
    }
};

int main() {
    Solution obj;
    
    vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    string s = "abcdefghijklmnopqrstuvwxyz";

    vector<int> res = obj.numberOfLines(widths, s);
    cout << res[0] << " " << res[1];
}
