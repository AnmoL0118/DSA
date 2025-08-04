// Grtting the Number Is Happy or Not
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
        bool isHappy(int n)
        {
                unordered_set<int> UsedIntegers; // To store previously seen numbers

                while (true)
                {

                        // Find the sum of squares of digits
                        int sum = 0;
                        while (n > 0)
                        {
                                int digit = n % 10;   // Get the last digit
                                sum += digit * digit; // Add square of the digit to sum
                                n /= 10;              // Remove the last digit
                        }

                        // If the sum is 1, then the number is happy
                        if (sum == 1)
                        {
                                return true;
                        }

                        n = sum; // Update n to the new sum
                        // If the sum has been seen before, then the number is not happy
                        if (UsedIntegers.find(n) != UsedIntegers.end())
                        {
                                return false;
                        }
                        UsedIntegers.insert(n); // Insert the new sum into the set
                        // Continue the process with the new sum
                        // This will repeat until we either find a happy number or enter a cycle
                }
        }
};

// class Solution {
// public:

//     int getNext(int n){
//         int sum = 0;
//         while(n > 0){
//             int digit = n %10;
//             sum += digit * digit;
//             n /= 10;
//         }
//         return sum;
//     }

//     bool isHappy(int n) {
//         unordered_set<int> seen;
//         while(n != 1 && !seen.count(n)){
//             seen.insert(n);
//             n = getNext(n);
//         }
//         return n == 1;
//     }
// };