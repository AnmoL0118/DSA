#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to take input of array elements
void arrayInput(vector<int> &v, int n)
{
        int temp;
        for (int i = 0; i < n; i++)
        {
                cin >> temp;
                v.push_back(temp); // Add input to the vector
        }
}

class Solution
{
public:
        bool containsDuplicate(vector<int> &nums)
        {
                sort(nums.begin(), nums.end()); // Sort the array

                for (int i = 1; i < nums.size(); i++)
                {
                        if (nums[i] == nums[i - 1])
                        { // Check adjacent elements
                                return true;
                        }
                }
                return false;
        }
};

int main()
{
        int n;
        vector<int> vec;

        cout << "Enter the number of elements in the array: ";
        cin >> n;

        cout << "Enter the array elements:" << endl;
        arrayInput(vec, n); // Read the input

        Solution sol;
        if (sol.containsDuplicate(vec))
        {
                cout << "The array contains duplicates." << endl;
        }
        else
        {
                cout << "The array does not contain duplicates." << endl;
        }

        return 0;
}
