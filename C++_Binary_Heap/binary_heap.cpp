#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

#include "heap.h"

Heap::Heap()
{
}

Heap::~Heap()
{
}

bool Heap::isempty()
{
  return heap.size() == 0;
}

void Heap::insert(int element)
{
    heap.push_back(element);
    heapifyup(heap.size() - 1);
}

int Heap::deletemin()
{
    int min = heap.front();
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    heapifydown(0);
    return min;
}

int Heap::findmin()
{
  return heap[0];
}

void Heap::print()
{
    vector<int>::iterator pos = heap.begin();
    while ( pos != heap.end() ) {
        cout << *pos << " ";
        ++pos;
    }
    cout << endl;
}

void Heap::heapifyup(int index)
{
    while ((index > 0) && (parent(index) >= 0) &&
            (heap[parent(index)] > heap[index]))
    {
        int tmp = heap[parent(index)];
        heap[parent(index)] = heap[index];
        heap[index] = tmp;
        index = parent(index);
    }
}

void Heap::heapifydown(int index)
{
    int child = left(index);
    if ( ( child > 0 ) && ( right(index) > 0 ) &&
         ( heap[child] > heap[right(index)] ) )
    {
        child = right(index);
    }
    if ( child > 0 && ( heap[child] < heap[index] ))
    {
        int tmp = heap[index];
        heap[index] = heap[child];
        heap[child] = tmp;
        heapifydown(child);
    }
}

int Heap::left(int parent)
{
    int i = ( parent << 1 ) + 1; // 2 * parent + 1
    return ( i < heap.size() ) ? i : -1;
}

int Heap::right(int parent)
{
    int i = ( parent << 1 ) + 2; // 2 * parent + 2
    return ( i < heap.size() ) ? i : -1;
}

int Heap::parent(int child)
{
    if (child != 0)
    {
        int i = (child - 1) >> 1;
        return i;
    }
    return -1;
}

int main()
{
    cout << "How many elements are in the heap? ";
    int heapSize;
    cin >> heapSize;

    // Create the heap
    Heap* myheap = new Heap();
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < heapSize+1; i++) {
        myheap->insert(i);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end-start;

    auto start_min = std::chrono::high_resolution_clock::now();
    int min = myheap->findmin();
    cout << "Minimum element is " << min << endl;
    auto end_min = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_min = end_min - start_min;

    // Get priority element from the heap
    auto start_delete = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < heapSize+1; i++) {
        //cout << myheap->deletemin() << endl;
        myheap->deletemin();
    }
    auto end_delete = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_delete = end_delete - start_delete;

    cout << "Time to insert " << heapSize << " items and print: " << diff.count() << endl;
    cout << "Time to delete minimum element: " << diff_delete.count() << endl;
    cout << "Time to find minimum element and print: " << diff_min.count() << endl;

    // Print heap
    cout << "The heap: ";
    myheap->print();

    delete myheap;
}
