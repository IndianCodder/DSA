// Maximum and minimum of an array
#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 6, 7, 9, 8, 3, 2}, min = 0, max = 0;
    min = a[0];
    max = a[0];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Min : " << min << "\n";
    cout << "Max : " << max;
    return 0;
}

//Output :
// Min : 2
// Max : 9
