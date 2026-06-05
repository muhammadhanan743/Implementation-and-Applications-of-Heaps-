#ifndef MINHEAP_H
#define MINHEAP_H

#include<iostream>
using namespace std;

class MinHeap
{
private:
    int heap[100];
    int size;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    MinHeap();

    void insert(int value);
    int deleteRoot();

    void display();
    int getSize();
};

#endif