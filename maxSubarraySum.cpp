#include <iostream>
#include <limits.h>
using namespace std;

int inputArray(int arr[], int n)
{
        cout << "Enter the elements of the array: ";
        // Input the elements of the array
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        return 0;
}

// Display the all possible SubArray
void displaySubArray(int arr[], int n)
{
        for (int i = 0; i < n; i++)
        {
                for (int j = i; j < n; j++)
                {
                        for (int k = i; k <= j; k++)
                        {
                                cout << arr[k] << " ";
                        }
                        cout << endl;
                }
        }
}

// This program displays all possible subarrays of a given array
int maxSubarraySum(int arr[], int n)
{
        int maxSum = INT16_MIN;

        for (int i = 0; i < n; i++)
        {
                for (int j = i; j < n; j++)
                {
                        // Calculate the sum of the subarray from index i to j
                        int currentSum = 0;
                        for (int k = i; k <= j; k++)
                        {
                                currentSum += arr[k];
                        }
                        maxSum = max(maxSum, currentSum);
                        cout << endl;
                }
        }
        return maxSum;
}

int main()
{
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        int arr[n];
        inputArray(arr, n);
        displaySubArray(arr, n);

        int maxSum = maxSubarraySum(arr, n);
        cout << "Maximum Subarray Sum: " << maxSum << endl;
        return 0;
}