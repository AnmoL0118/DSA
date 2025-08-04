// Reverse the Vowels in a String

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        // Give the String S to the word..
        string word = s;
        int start = 0;
        int end = s.length() - 1;
        // Using the  unordered Set to contain the Vowels..
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while (start < end)
        {

            while (start < end && vowel.count(word[start]) == 0)
            {
                start++; // Move start pointer to the right until a vowel is found
            }
            while (start < end && vowel.count(word[end]) == 0)
            {
                end--; // Move end pointer to the left until a vowel is found
            }
            swap(word[start], word[end]); // Swap the vowels at start and end pointers
            start++;
            end--; // Move both pointers inward
        }

        return word; // Return the modified string with vowels reversed
    }
};