#include <iostream>
using namespace std;

int main()
{
    int size, i, j, temp;
    cin >> size;
    int a[size];

    cout << "Enter elements: ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
