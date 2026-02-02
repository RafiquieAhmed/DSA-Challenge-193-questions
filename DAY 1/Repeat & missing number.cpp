#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;

    int n = grid.size();
    int a = 0, b = 0;
    int actualsum = 0;
    int expsum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            actualsum += grid[i][j];

            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];   // repeated
            }
            s.insert(grid[i][j]);
        }
    }

    expsum = (n * n) * (n * n + 1) / 2;
    b = expsum + a - actualsum;   // missing

    ans.push_back(a);
    ans.push_back(b);

    return ans;
}

int main() {
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    vector<int> result = findMissingAndRepeatedValues(grid);

    cout << "Repeated: " << result[0] << endl;
    cout << "Missing : " << result[1] << endl;

    return 0;
}
