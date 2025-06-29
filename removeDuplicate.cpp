// Remove the duplicate elements from the array

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
        int removeDuplicates(vector<int> &nums)
        {

                int insertIndex = 1;

                for (int i = 1; i < nums.size(); i++)
                {

                        // We skip to next index if we see a duplicate element
                        if (nums[i - 1] != nums[i])
                        {

                                // Storing the unique element at insertIndex index and incrementing the insertIndex by 1
                                nums[insertIndex++] = nums[i];
                        }
                }

                return insertIndex;
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

        int newSize = solution.removeDuplicates(nums);

        cout << "Array after removing duplicates: ";
        for (int i = 0; i < newSize; ++i)
        {
                cout << nums[i] << " ";
        }
        cout << endl;

        return 0;
}