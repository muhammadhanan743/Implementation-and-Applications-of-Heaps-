#include<iostream>
#include "MinHeap.h"
#include "MaxHeap.h"

using namespace std;

int main()
{
    int arr[] = { 20, 5, 15, 10, 30 };
    int n = 5;

    MinHeap minH;

    for (int i = 0;i < n;i++)
        minH.insert(arr[i]);

    cout << "Ascending Order:" << endl;

    while (minH.getSize() > 0)
    {
        cout << minH.deleteRoot() << " ";
    }

    cout << endl;

    MaxHeap maxH;

    for (int i = 0;i < n;i++)
        maxH.insert(arr[i]);

    cout << "Descending Order:" << endl;

    while (maxH.getSize() > 0)
    {
        cout << maxH.deleteRoot() << " ";
    }

    cout << endl;

    return 0;
}