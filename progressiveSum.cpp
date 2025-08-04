#include <iostream>
#include <array>
using namespace std;

const int MAX_SIZE = 100; // define MAX_SIZE to avoid error

// Function to take input of array elements
void arrayInput(int arr[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
}

// Function to display array
void displayArray(int arr[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

// Function to compute progressive sum
void progressiveSum(int arr[], int progressiveArr[], int n)
{
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
                sum += arr[i];
                progressiveArr[i] = sum;
        }
}

int main()
{
        int n;
        int arr[MAX_SIZE];

        cout << "Enter the number of elements in the array: ";
        cin >> n;

        cout << "Enter the array elements:" << endl;
        arrayInput(arr, n);

        cout << "Original array: ";
        displayArray(arr, n);

        int progressiveSumArray[MAX_SIZE];
        progressiveSum(arr, progressiveSumArray, n);

        cout << "Progressive sum of the array: ";
        displayArray(progressiveSumArray, n);

        return 0;
}
