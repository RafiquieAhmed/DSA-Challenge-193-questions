#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;
    int n = nums.size();

    // Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        }

        if (nums[i] == ans)
            freq++;
        else
            freq--;
    }

    // Verification step
    int count = 0;
    for (int val : nums) {
        if (val == ans)
            count++;
    }

    if (count > n / 2)
        return ans;
    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
