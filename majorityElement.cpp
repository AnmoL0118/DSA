// find the majority element in an array
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
        int majorityElement(vector<int> &nums)
        {

                int freq = 0;
                int ans = 0;

                for (int i = 0; i < nums.size(); i++)
                {
                        if (freq == 0)
                        {
                                ans = nums[i];
                        }
                        if (ans == nums[i])
                        {
                                freq++;
                        }
                        else
                        {
                                freq--;
                        }
                }

                return ans;
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

        int result = solution.majorityElement(nums);
        cout << "The majority element is: " << result << endl;

        return 0;
}