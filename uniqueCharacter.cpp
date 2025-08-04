// Find the Unique Character in a String
#include <iostream>
#include <unordered_map>
#include <string>
#include <queue>
using namespace std;

class Solution
{
public:
        int firstUniqChar(string s)
        {

                unordered_map<char, int> mp;
                queue<int> q;

                // Count frequency of each character
                for (int i = 0; i < s.size(); i++)
                {
                        // If character is not in the map, add it to the queue
                        // and increment its count in the map
                        if (mp.find(s[i]) == mp.end())
                        {
                                q.push(i);
                        }

                        mp[s[i]]++; // Increment the count of the character

                        while (q.size() > 0 && mp[s[q.front()]] > 1) // If the front character in the queue has a count greater than 1,
                        {
                                q.pop(); // Remove it from the queue
                        }
                }

                return q.empty() ? -1 : q.front(); // Return the index of the first unique character or -1 if none exists
        }
};

int main()
{
        string s;
        cout << "Enter a string: ";
        cin >> s;

        Solution sol;
        int index = sol.firstUniqChar(s);

        if (index != -1)
        {
                cout << "The first unique character is at index: " << index << endl;
        }
        else
        {
                cout << "No unique character found." << endl;
        }

        return 0;
}