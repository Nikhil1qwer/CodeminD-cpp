#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> nums;
public:
    Solution(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sum() {
        return accumulate(nums.begin(), nums.end(), 0);
    }
};

int main() {
    int n; cin >> n;
    
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        nums.push_back(num);
    }
    
    Solution s(nums);
    cout << s.sum();
}