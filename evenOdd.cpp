// Calculate Even and Odd Sum of an Array Without Using Modulo Operator

#include <iostream>
#include <array>
using namespace std;

// #define MAX_SIZE 100 // define MAX_SIZE to avoid error
// #define type int

// void inputArray(array<type, MAX_SIZE> &arr, int n)
// {
//         for (int i = 0; i < n; i++)
//         {
//                 cin >> arr[i];
//         }
// }

// void displayArray(const array<type, MAX_SIZE> &arr, int n)
// {
//         for (int i = 0; i < n; i++)
//         {
//                 cout << arr[i] << " ";
//         }
//         cout << endl;
// }

// void calculateEvenOddSum(const array<type, MAX_SIZE> &arr, int n, type &evenSum, type &oddSum)
// {
//         evenSum = 0;
//         oddSum = 0;

//         for (int i = 0; i < n; i++)
//         {
//                 if ((arr[i] & 1) == 0)
//                 {
//                         evenSum += arr[i];
//                 }
//                 else
//                 {
//                         oddSum += arr[i];
//                 }
//         }
// }
// int main()
// {

//         array<type, MAX_SIZE> arr;
//         int n;
//         type evenSum, oddSum;

//         cout << "Enter the number of elements in the array: ";
//         cin >> n;

//         if (n < 1 || n > MAX_SIZE)
//         {
//                 cout << "Invalid array size!" << endl;
//                 return 1;
//         }

//         cout << "Enter the elements: ";
//         inputArray(arr, n);

//         calculateEvenOddSum(arr, n, evenSum, oddSum);

//         cout << "Even Sum: " << evenSum << endl;
//         cout << "Odd Sum: " << oddSum << endl;

//         return 0;
// }

int main()
{
        int num = 5; // Fixed assignment

        // Using modulus operator
        if (num % 2 == 0)
                cout << "Even (using %)" << endl;
        else
                cout << "Odd (using %)" << endl;

        // Using division and multiplication
        if ((num / 2) * 2 == num)
                cout << "Even (using / and *)" << endl;
        else
                cout << "Odd (using / and *)" << endl;

        if (num & 1 == 1)
                cout << "Odd (using Bitwise AND)" << endl;
        else
                cout << "Even (using Bitwise AND)" << endl;

        if ((num ^ 1) == num + 1)
                cout << "Even (using XOR)" << endl;
        else
                cout << "Odd (using XOR)" << endl;
}