// Find Subsequence of Length K With the Largest Sum

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maxSubsequence(vector<int> &nums, int k)
{
        // Create a vector of pairs to store the elements and their indices
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i)
        {
                indexedNums.push_back({nums[i], i});
        }

        // Sort the vector based on the values in descending order
        sort(indexedNums.begin(), indexedNums.end(), greater<pair<int, int>>());

        // Select the first k elements
        vector<int> result;
        for (int i = 0; i < k; ++i)
        {
                result.push_back(indexedNums[i].first);
        }

        // Sort the result to maintain the original order of indices
        sort(result.begin(), result.end());

        return result;
}

int main()
{
        vector<int> nums;
        int n, k;
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; ++i)
        {
                int num;
                cin >> num;
                nums.push_back(num);
        }
        cout << "Enter the value of k: ";
        cin >> k;

        vector<int> result = maxSubsequence(nums, k);

        cout << "Subsequence of length " << k << " with the largest sum: ";
        for (int num : result)
        {
                cout << num << " ";
        }
        cout << endl;

        return 0;
}

// class Solution {
// public:
//     vector<int> maxSubsequence(vector<int>& nums, int k) {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             pq.push({nums[i],i});
//             if(pq.size() > k) pq.pop();
//         }
//         vector<int>ans;
//         while(!pq.empty()){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         sort(ans.begin(),ans.end());
//         for(int i=0;i<ans.size();i++){
//             ans[i] = nums[ans[i]];
//         }
//         return ans;
//     }
// };

// Approach
// Use a min-heap (priority queue) to keep track of the top k largest elements along with their original indices.
// For each element in nums, push (value, index) to the heap. If the heap size exceeds k, remove the smallest one.
// This ensures that at the end, the heap contains the top k values along with their original positions.
// Extract the indices from the heap, sort them to maintain the original order.
// Finally, return the values from the original array using these sorted indices.
