// Maximum Points we can get from the cards
#include <iostream>
#include <vector>
using namespace std;

int maxPoints(vector<int> &nums, int k)
{
        int l_sum = 0;
        int r_sum = 0;
        int maxSum = 0;

        for (int i = 0; i < k; i++)
        {
                l_sum += nums[i]; // Sum of the first k elements
                maxSum = l_sum;   // Initialize maxSum with the left sum
        }

        int rIndex = nums.size() - 1;
        for (int i = k - 1; i >= 0; i--)
        {

                l_sum -= nums[i];                    // Remove the leftmost element from the left sum
                r_sum += nums[rIndex];               // Add the rightmost element to the right sum
                rIndex--;                            // Move the right index to the left
                maxSum = max(maxSum, l_sum + r_sum); // Update maxSum with the sum of left and right parts
        }
        return maxSum; // Return the maximum points we can get
}

int main()
{
        int n, k;
        cout << "Enter the number of cards: ";
        cin >> n;
        cout << "Enter the number of cards to pick from each end: ";
        cin >> k;

        vector<int> nums(n);
        cout << "Enter the points on each card: ";
        for (int i = 0; i < n; i++)
        {
                cin >> nums[i];
        }

        int result = maxPoints(nums, k);
        cout << "Maximum points we can get: " << result << endl;

        return 0;
}