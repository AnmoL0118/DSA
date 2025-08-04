// Union of the Sorted Arrays
// Given two sorted arrays, find the union of the two arrays.
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
        vector<int> unionSortedArray(vector<int> &arr1, vector<int> &arr2)
        {

                int n1 = arr1.size();
                int n2 = arr2.size();
                int i = 0, j = 0;
                vector<int> unionArray;
                // Traverse both arrays

                while (i < n1 && j < n2)
                {

                        if (arr1[i] <= arr2[j])
                        {
                                // If the current element of arr1 is less than or equal to that of arr2
                                // Check if the element is already in the unionArray to avoid duplicates
                                if (unionArray.empty() || unionArray.back() != arr1[i])
                                {
                                        unionArray.push_back(arr1[i]);
                                }
                                i++;
                        }
                        else
                        {
                                if (unionArray.empty() || unionArray.back() != arr2[j])
                                {
                                        unionArray.push_back(arr2[j]);
                                }
                                j++;
                        }
                }

                // If there are remaining elements in arr1
                while (i < n1)
                {
                        if (unionArray.empty() || unionArray.back() != arr1[i])
                        {
                                unionArray.push_back(arr1[i]);
                        }
                        i++;
                }

                while (j < n2)
                {
                        if (unionArray.empty() || unionArray.back() != arr2[j])
                        {
                                unionArray.push_back(arr2[j]);
                        }
                        j++;
                }

                return unionArray;
        }
};
