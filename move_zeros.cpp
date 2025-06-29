// Move the Zeros to the End of an Array

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
        void moveZeroes(vector<int> &nums)
        {

                int nonZero = 0;

                for (int j = 0; j < nums.size(); j++)
                {

                        if (nums[j] != 0)
                        {
                                swap(nums[j], nums[nonZero]);
                                nonZero++;
                        }
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