#include <iostream>
#include <array>
using namespace std;

#define MAX_SIZE 100 // define MAX_SIZE to avoid error
#define type int

inputArray(array<type, MAX_SIZE> &arr, int n)
{
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
}

void displayArray(const array<type, MAX_SIZE> &arr, int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}
// Function to compute progressive sum
prifixSum(const array<type, MAX_SIZE> &arr, array<type, MAX_SIZE> &prefixArr, int n)
{
        if (n < 1 || n > MAX_SIZE)
        {
                cout << "Invalid array size!" << endl;
                return;
        }
        prefixArr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
                prefixArr[i] = prefixArr[i - 1] + arr[i];
        }
        cout << "Progressive sum array: ";
}

// Function to calculate the range base sum of the prefix array
int rangeBaseSum(const array<type, MAX_SIZE> &prefixArr, int l, int r)
{
        if (l < 0 || r < 0 || l > r || r >= MAX_SIZE)
        {
                cout << "Invalid range!" << endl;
                return 0;
        }
        if (l == 0)
        {
                return prefixArr[r];
        }
        return prefixArr[r] - prefixArr[l - 1];
}

int main()
{
        array<type, MAX_SIZE> arr;
        array<type, MAX_SIZE> prefixArr;
        int n;

        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n < 1 || n > MAX_SIZE)
        {
                cout << "Invalid array size!" << endl;
                return 1;
        }

        cout << "Enter the elements: ";
        inputArray(arr, n);

        prefixSum(arr, prefixArr, n);
        cout << "Progressive sum array: ";
        displayArray(prefixArr, n);

        // calculate the Range Base Sum of the Prefix Array
        int l, r;
        cout << "Enter the range (l r): ";
        cin >> l >> r;
        int sum = rangeBaseSum(prefixArr, l, r);
        cout << "Range base sum from index " << l << " to " << r << " is: " << sum << endl;
        return 0;
}