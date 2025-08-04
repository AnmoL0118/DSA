#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int n;
        cout << "enter the Size of array";
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
                cin >> vec[i];
        }

        reverse(vec.begin(), vec.end()); // Reverse the vector
        cout << "Reversed array: ";
        for (int i = 0; i < n; i++)
        {
                cout << vec[i] << " "; // Print the reversed array
        }
        return 0;
}
