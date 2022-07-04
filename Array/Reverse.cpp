#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5}, res[10];

    // sizeof operator returns the size of datatypes in bytes like sizeof(char)=1 or sizeof(int)=4
    int n = sizeof(a) / sizeof(a[0]);
    // Reversing array
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        res[i] = a[j];
    }

    cout << "Input Array:\t";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    cout << "Output Array :\t";
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}


// Input Array:    1 2 3 4 5 
// Output Array :  5 4 3 2 1
