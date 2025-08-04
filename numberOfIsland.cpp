// Determine the number of islands in a 2D grid
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
        int numIslands(vector<vector<char>> &grid)
        {
                if (grid.empty() || grid[0].empty())
                {
                        return 0;
                }

                int count = 0;
                int n = grid.size();    // rows
                int m = grid[0].size(); // columns

                for (int i = 0; i < n; i++)
                {
                        for (int j = 0; j < m; j++)
                        {
                                if (grid[i][j] == '1')
                                {
                                        dfs(grid, i, j);
                                        count++;
                                }
                        }
                }

                return count;
        }

private:
        void dfs(vector<vector<char>> &grid, int i, int j)
        {
                int n = grid.size();
                int m = grid[0].size();

                if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0')
                {
                        return;
                }

                grid[i][j] = '0'; // mark as visited

                // explore all 4 directions
                dfs(grid, i + 1, j);
                dfs(grid, i - 1, j);
                dfs(grid, i, j + 1);
                dfs(grid, i, j - 1);
        }
};
