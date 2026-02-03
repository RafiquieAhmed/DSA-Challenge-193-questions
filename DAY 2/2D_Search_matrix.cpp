// 2D_Search_matrix.cpp

#include <iostream>
#include <vector>
using namespace std;

// Function to search in 2D matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int r = 0, c = n - 1;

    while (r < m && c >= 0) {
        if (matrix[r][c] == target) {
            return true;
        }
        else if (target < matrix[r][c]) {
            c--;
        }
        else {
            r++;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1,  4,  7, 11},
        {2,  5,  8, 12},
        {3,  6,  9, 16},
        {10,13,14,17}
    };

    int target = 5;

    if (searchMatrix(matrix, target))
        cout << "Target found";
    else
        cout << "Target not found";

    return 0;
}
