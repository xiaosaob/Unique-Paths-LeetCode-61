// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

// How many possible unique paths are there?


// Above is a 3 x 7 grid. How many possible unique paths are there?

// Note: m and n will be at most 100.

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> table(n+1, 1);
        for(int i = 1; i < m; ++i) {
            table[0] = 0;
            for(int j = 1; j <= n; ++j) {
                table[j] += table[j-1];
            }
        }
        return table[n];
    }
};
