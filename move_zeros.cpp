// Move the Zeros to the End of an Array

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
        void moveZeroes(vector<int> &nums)
        {

                int lastNonZeroIndex = 0; // Pointer for the position of the last non-zero element

                // Move all non-zero elements to the front
                for (int i = 0; i < nums.size(); ++i)
                {
                        if (nums[i] != 0)
                        {
                                nums[lastNonZeroIndex++] = nums[i];
                        }
                }

                // Fill the remaining positions with zeros
                for (int i = lastNonZeroIndex; i < nums.size(); ++i)
                {
                        nums[i] = 0;
                }
        }
};

int main()
{
        Solution solution;
        vector<int> nums;

        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; ++i)
        {
                int num;
                cin >> num;
                nums.push_back(num);
        }

        solution.moveZeroes(nums);

        cout << "Array after moving zeros to the end: ";
        for (int num : nums)
        {
                cout << num << " ";
        }
        cout << endl;

        return 0;
}