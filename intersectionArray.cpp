// Intersection of two sorted arrays
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{

public:
        vector<int> intersectionArray(vector<int> &A, vector<int> &B)
        {
                int n = A.size();
                int m = B.size();
                int i = 0, j = 0;

                vector<int> intersection;

                while (i < n && j < m) // Traverse both arrays
                {
                        if (A[i] < B[j]) // If the current element of A is less than that of B
                        {
                                i++; // Move to the next element in A
                        }
                        else if (B[j] < A[i]) // If the current element of B is less than that of A
                        {
                                j++; // Move to the next element in B
                        }
                        else
                        {
                                intersection.push_back(A[i]); // If both elements are equal, add to intersection array...
                                i++;
                                j++;
                        }
                }
                return intersection; // Return the vector containing the intersection of the two arrays
        }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        // Create a set from the first array to allow O(1) lookups
        // This will also remove duplicates from nums1
        unordered_set<int> result;

        // Iterate through the second array and check if each element is in the set
        // If it is, add it to the result set
        for (int num : nums2) {
            if (set1.count(num)) {  // Check if the element exists in the set
                // If it exists, add it to the result set
                result.insert(num);  // ensures uniqueness
            }
        }

        return vector<int>(result.begin(), result.end());  // Convert the set back to a vector and return it
    }
};