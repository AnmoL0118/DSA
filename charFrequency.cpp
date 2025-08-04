// Sort the Character Frequency in Descending Order
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

class Solution
{
public:
        string frequencySort(string s)
        {

                // Declare the map and priority Queue(max-heap)

                unordered_map<char, int> mp;
                priority_queue<pair<int, char>> pq;

                string result = ""; // result value

                for (auto it : s)
                {
                        mp[it]++; // push the char value and Increment the frequency of each character..
                                  // In this we first push the charater then increment the Frequency...
                }

                for (auto i : mp)
                {
                        pq.push({i.second, i.first});
                        // After pushing the (freq,char) then it automatically arrange in max-heap property..
                }

                // traversal process

                while (!pq.empty())
                {
                        auto temp = pq.top();
                        int freq = temp.first;
                        int ch = temp.second;

                        result += string(freq, ch);
                        // we push each character in string based on their Frequency..
                        pq.pop(); // then pop the top element..
                }

                return result; // Return the Result String..
        }
};