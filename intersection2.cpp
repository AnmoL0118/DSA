// DSA/intersection2.cpp
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

class Solution
{
public:
        vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
        {

                unordered_set<int> mp(nums1.begin(), nums1.end());

                unordered_set<int> result;

                for (auto num : nums2)
                {
                        if (mp.count(num))
                        {
                                result.insert(num); // If the element exists in the set, add it to the result set
                        }
                }

                return vector<int>(result.begin(), result.end()); // Convert the set back to a vector and return it
        }
};