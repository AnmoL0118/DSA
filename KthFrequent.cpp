#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
                vector<int> result;

                unordered_map<int, int> mp;
                for (auto num : nums)
                {
                        mp[num]++;
                }

                // Create a bucket where index is frequency, and value is list of numbers with that frequency
                int n = nums.size();
                vector<vector<int>> bucket(n + 1);

                for (auto &[num, freq] : mp)
                {
                        bucket[freq].push_back(num);
                }

                // Traverse the bucket from high frequency to low
                for (int i = n; i >= 0 && result.size() < k; i--)
                {
                        for (int num : bucket[i])
                        {
                                result.push_back(num);
                                if (result.size() == k)
                                        break;
                        }
                }

                return result;
        }
};

int main()
{
        Solution solution;
        vector<int> nums = {1, 1, 1, 2, 2, 3};
        int k = 2;

        vector<int> result = solution.topKFrequent(nums, k);
        cout << "The " << k << " most frequent elements are: ";
        for (int num : result)
        {
                cout << num << " ";
        }
        cout << endl;

        return 0;
}
