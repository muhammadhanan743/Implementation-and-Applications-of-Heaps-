#pragma once
#ifndef MAXHEAP_H
#define MAXHEAP_H

#include<iostream>
using namespace std;

class MaxHeap
{
private:
    int heap[100];
    int size;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    MaxHeap();

    void insert(int value);
    int deleteRoot();

    void display();
    int getSize();
};

#endif