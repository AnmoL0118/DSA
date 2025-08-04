// longestCommonPrefix.cpp
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution
{
public:
        string longestCommonPrefix(vector<string> &strs)
        {

                string result = "";
                sort(strs.begin(), strs.end());

                if (strs.empty())
                {
                        return result; // Return empty string if input is empty
                }

                // Compare the first and last strings in the sorted array
                string first = strs[0];
                string last = strs[strs.size() - 1];
                for (int i = 0; i < first.size() && i < last.size(); i++)
                {
                        if (first[i] != last[i])
                        {
                                break; // Stop when characters differ
                        }
                        result += first[i]; // Append common character to result
                }
                return result; // Return the longest common prefix
        }
};