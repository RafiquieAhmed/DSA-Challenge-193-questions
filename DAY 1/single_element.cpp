#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int n : nums) {
        ans ^= n;
    }
    return ans;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single Number: " << singleNumber(nums) << endl;

    return 0;
}
