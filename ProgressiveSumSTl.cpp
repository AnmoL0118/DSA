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

        prefixArr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
                prefixArr[i] = prefixArr[i - 1] + arr[i];
        }

        cout << "Progressive sum array: ";
        displayArray(prefixArr, n);
}