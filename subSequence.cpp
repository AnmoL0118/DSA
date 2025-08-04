#include <iostream>
#include <string>
using namespace std;

class Solution
{

public:
        // Function to check if string s is a subsequence of string t
        bool subSequence(string s, string t)
        {
                int n = s.length();
                int m = t.length();
                int i = 0, j = 0;

                while (i < n && j < m)
                {
                        if (s[i] == t[j])
                        {
                                i++; // Move to the next character in s
                        }
                        j++; // Always move to the next character in t
                }

                // If we have traversed all characters in s, it is a subsequence of t
                if (i == n)
                {
                        return true;
                }
                else
                {
                        return false;
                }
        }
};

int main()
{
        Solution solution;
        string s = "bna";
        string t = "banana";

        if (solution.subSequence(s, t))
        {
                cout << "s is a subsequence of t" << endl;
        }
        else
        {
                cout << "s is not a subsequence of t" << endl;
        }

        return 0;
}