#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string temp="";
        for(char c:s){
            if(!temp.empty() && temp.back()==c) temp.pop_back();
            else temp.push_back(c);
        }
        return temp;
    }
};

int main() {
    Solution obj;
    string s;
    cin >> s;
    cout << obj.removeDuplicates(s);
    return 0;
}
