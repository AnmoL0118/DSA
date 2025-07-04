#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Two Sum Problem
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
class Solution
{
public:
        vector<int> twoSum(vector<int> &nums, int target)
        {

                unordered_map<int, int> numMap;
                // value -> index
                for (int i = 0; i < nums.size(); i++)
                {

                        int comp = target - nums[i];

                        // checking the Second Number.......
                        if (numMap.find(comp) != numMap.end())
                        {
                                return {numMap[comp], i}; // it return the Second Number with Their Index Position
                        }

                        // Store the current number with its index
                        numMap[nums[i]] = i;
                }
                return {};
        }
};

int main()
{
        Solution solution;
        vector<int> nums;
        int n, target;

        cout << "Enter the number of elements in the array: ";
        cin >> n;

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; ++i)
        {
                int num;
                cin >> num;
                nums.push_back(num);
        }

        cout << "Enter the target sum: ";
        cin >> target;

        vector<int> result = solution.twoSum(nums, target);

        if (!result.empty())
        {
                cout << "Indices of the two numbers that add up to " << target << ": ";
                cout << result[0] << " and " << result[1] << endl;
        }
        else
        {
                cout << "No two numbers add up to the target." << endl;
        }

        return 0;
}