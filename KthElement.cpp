// Find the Kth Largest Element in an Array

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
        // Function to find the Kth largest element in an array
        int kthLargest(vector<int> &arr, int k)
        {
                // Create a min-heap using priority queue
                priority_queue<int, vector<int>, greater<int>> minHeap;

                for (auto num : arr)
                {
                        minHeap.push(num); // Push the current element into the min-heap
                        if (minHeap.size() > k)
                        {
                                minHeap.pop(); // Remove the smallest element if size exceeds k
                        }
                }
                // The top of the min-heap is the Kth largest element
                return minHeap.top();
        }
};

int main()
{
        Solution s;
        vector<int> v = {3, 2, 1, 5, 6, 4};
        int k = 2;
        int result = s.kthLargest(v, k);
        cout << "The " << k << "th largest element is: " << result << endl;
        return 0;
}
