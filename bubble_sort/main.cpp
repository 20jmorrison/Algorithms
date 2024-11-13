#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 2};

    cout << "Unsorted Array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    bubble_sort(arr, size);

    cout << "\n\nSorted Array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}