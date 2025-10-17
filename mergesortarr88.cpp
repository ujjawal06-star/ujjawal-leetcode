#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j < n; j++) {
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main() {
    Solution sol;
    int m, n;

    cout << "Enter number of elements in nums1 (excluding extra zeros): ";
    cin >> m;

    cout << "Enter number of elements in nums2: ";
    cin >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    cout << "Enter " << m << " sorted elements of nums1: ";
    for (int i = 0; i < m; i++) cin >> nums1[i];

    cout << "Enter " << n << " sorted elements of nums2: ";
    for (int i = 0; i < n; i++) cin >> nums2[i];

    sol.merge(nums1, m, nums2, n);

    cout << "Merged sorted array: ";
    for (int num : nums1) cout << num << " ";
    cout << endl;

    return 0;
}
