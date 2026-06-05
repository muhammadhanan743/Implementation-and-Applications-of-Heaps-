#include "MinHeap.h"

MinHeap::MinHeap()
{
    size = 0;
}

void MinHeap::heapifyUp(int index)
{
    while (index > 0)
    {
        int parent = (index - 1) / 2;

        if (heap[parent] > heap[index])
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

void MinHeap::insert(int value)
{
    heap[size] = value;
    heapifyUp(size);
    size++;
}

void MinHeap::heapifyDown(int index)
{
    while (true)
    {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != index)
        {
            int temp = heap[index];
            heap[index] = heap[smallest];
            heap[smallest] = temp;

            index = smallest;
        }
        else
        {
            break;
        }
    }
}

int MinHeap::deleteRoot()
{
    if (size == 0)
        return -1;

    int root = heap[0];

    heap[0] = heap[size - 1];
    size--;

    heapifyDown(0);

    return root;
}

void MinHeap::display()
{
    for (int i = 0;i < size;i++)
        cout << heap[i] << " ";

    cout << endl;
}

int MinHeap::getSize()
{
    return size;
}