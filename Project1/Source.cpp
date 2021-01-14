#include <iostream>

using namespace std;

void fillArray(int* arr, int size)
{
    if (size > 0)
        fillArray(arr, size - 1);
    cout << size << " > ";
    cin >> arr[size];
}

void printArray(int* arr, int size)
{
    if (size > 0)
        printArray(arr, size - 1);
    cout << arr[size] << " ";
}

int sumOfEvenElements(int* arr, int size)
{
    if (size == -1)
        return 0;

    if (arr[size] % 2 == 0)
        return arr[size] + sumOfEvenElements(arr, size - 1);
    return sumOfEvenElements(arr, size - 1);
}

int main()
{
    int n;

    cout << "N > ";
    cin >> n;

    int* arr = new int[n];

    fillArray(arr, n - 1);

    cout << "Array: ";
    printArray(arr, n - 1);
    cout << endl;

    cout << "Sum of even elements: " << sumOfEvenElements(arr, n - 1) << endl;

    return 0;
}
