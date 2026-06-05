#include "MaxHeap.h"

MaxHeap::MaxHeap()
{
    size = 0;
}

void MaxHeap::heapifyUp(int index)
{
    while (index > 0)
    {
        int parent = (index - 1) / 2;

        if (heap[parent] < heap[index])
        {
            int temp = heap[parent];
            heap[parent] = heap[index];
            heap[index] = temp;

            index = parent;
        }
        else
        {
            break;
        }
    }
}

void MaxHeap::insert(int value)
{
    heap[size] = value;
    heapifyUp(size);
    size++;
}

void MaxHeap::heapifyDown(int index)
{
    while (true)
    {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != index)
        {
            int temp = heap[index];
            heap[index] = heap[largest];
            heap[largest] = temp;

            index = largest;
        }
        else
        {
            break;
        }
    }
}

int MaxHeap::deleteRoot()
{
    if (size == 0)
        return -1;

    int root = heap[0];

    heap[0] = heap[size - 1];
    size--;

    heapifyDown(0);

    return root;
}

void MaxHeap::display()
{
    for (int i = 0;i < size;i++)
        cout << heap[i] << " ";

    cout << endl;
}

int MaxHeap::getSize()
{
    return size;
}