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

int maxSubarraySum(int arr[], int n, int &k)
{
        int maxSum = 0;

        for (int i = 0; i < n; i++)
        {
                int sum = 0;
                for (int j = i; j < n; j++)
                {
                        sum = sum + arr[j];
                        if (sum <= k)
                        {
                                maxSum = max(maxSum, sum);
                        }
                        else
                        {
                                break; // If sum exceeds k, break the inner loop
                        }
                }
        }
        return maxSum;
}

// Find the Longest SubArray with condition = (Sum<=k)

int main()
{
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        int arr[n];
        int k;
        cout << "Enter the maximum allowed subarray sum (k): ";
        cin >> k;

        inputArray(arr, n);

        int maxSum = maxSubarraySum(arr, n, k);
        cout << "Maximum subarray sum not exceeding " << k << " is: " << maxSum << endl;

        return 0;
}