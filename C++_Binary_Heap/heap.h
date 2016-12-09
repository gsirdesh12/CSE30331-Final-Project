//
//  heap.h
//  
//
// s
//
//

#ifndef heap_h
#define heap_h

using namespace std;

class Heap {
public:
    Heap();
    ~Heap();
    void insert(int element);
    int deletemin();
    void print();
    int size() { return heap.size(); }
    bool isempty();
    int findmin();
    //vector<int> mergeheaps(vector<int> a, vector<int> b)
private:
    int left(int parent);
    int right(int parent);
    int parent(int child);
    void heapifyup(int index);
    void heapifydown(int index);
private:
    vector<int> heap;
};


#endif /* heap_h */
