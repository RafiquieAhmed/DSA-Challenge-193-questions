#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()); // sort by start time

        vector<vector<int>> ans;

        for (auto &it : intervals) {
            // if ans is empty or no overlap
            if (ans.empty() || ans.back()[1] < it[0]) {
                ans.push_back(it);
            }
            // overlap -> merge
            else {
                ans.back()[1] = max(ans.back()[1], it[1]);
            }
        }
        return ans;
    }
};
