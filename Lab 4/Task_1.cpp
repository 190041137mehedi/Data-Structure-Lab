#include <bits/stdc++.h>

using namespace std;

class heap
{
    int *arr;
    int size;

public:
    heap(int n, int *arrin)
    {
        size = n;
        arr = arrin;
    }
    void heapify(int n)
    {
        int largest = n;
        int leftChild = 2 * n + 1;
        int rightChild = 2 * n + 2;
        if (leftChild < size && arr[leftChild] > arr[n])
            largest = leftChild;
        if (rightChild <= size && arr[rightChild] > arr[n])
            largest = rightChild;
        if (largest != n)
        {
            swap(arr[n], arr[largest]);
            heapify(largest);
        }
        return;
    }
    void heap_sort()
    {
        if (size == 1)
            return;
        swap(arr[0], arr[size]);
        size--;
        heapify(0);
        heap_sort();
        return;
    }
    void build_max_heap()
    {
        for (int i = size / 2; i >= 0; i--)
            heapify(i);
        heapify(0);
    }
};

int main()
{
    int i, n;
    int arr[] = {20, 100, 5, 30, 40, 105, 70, 50, 85};
    heap heap1(9, arr);
    heap1.build_max_heap();

    for (i = 0; i < 9; i++)
        cout << arr[i] << " ";
}
