#include<iostream>
#include "MinHeap.h"
#include "MaxHeap.h"

using namespace std;

int main()
{
    MinHeap minH;
    MaxHeap maxH;

    minH.insert(20);
    minH.insert(10);
    minH.insert(30);
    minH.insert(5);

    cout << "Min Heap Before Deletion:" << endl;
    minH.display();

    cout << "Deleted Root = " << minH.deleteRoot() << endl;

    cout << "After Deletion:" << endl;
    minH.display();

    cout << endl;

    maxH.insert(20);
    maxH.insert(10);
    maxH.insert(30);
    maxH.insert(40);

    cout << "Max Heap Before Deletion:" << endl;
    maxH.display();

    cout << "Deleted Root = " << maxH.deleteRoot() << endl;

    cout << "After Deletion:" << endl;
    maxH.display();

    return 0;
}