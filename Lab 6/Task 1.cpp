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
        if (rightChild < size && arr[rightChild] > arr[largest])
            largest = rightChild;
        if (largest != n)
        {
            swap(arr[n], arr[largest]);
            heapify(largest);
        }
        return;
    }

    void build_max_heap()
    {
        for (int i = size / 2; i >= 0; i--)
            heapify(i);
    }

    int extract_max()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return -1; // Return a sentinel value or throw an exception for empty heap
        }
        int max_element = arr[0];
        swap(arr[0], arr[size - 1]);
        size--;
        heapify(0);
        return max_element;
    }

    void insert(int key)
    {
        size++;
        arr[size - 1] = key;
        int i = size - 1;
        while (i > 0 && arr[(i - 1) / 2] < arr[i])
        {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void increase_key(int index, int key)
    {
        if (key < arr[index])
        {
            cout << "New key is smaller than the current key." << endl;
            return;
        }
        arr[index] = key;
        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void decrease_key(int index, int key)
    {
        if (key > arr[index])
        {
            cout << "New key is greater than the current key." << endl;
            return;
        }
        arr[index] = key;
        heapify(index);
    }

    void heap_sort()
    {
        for (int i = size - 1; i >= 0; i--)
        {
            swap(arr[0], arr[i]);
            size--;
            heapify(0);
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
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
    cout << endl;

    cout << "Extracted Max Element: " << heap1.extract_max() << endl;
    heap1.print();

    cout << "Insert:" << endl;
    heap1.insert(200);
    heap1.print();

    cout << "Increase key at index 3 to 120" << endl;
    heap1.increase_key(3, 120);
    heap1.print();

    cout << "Decrease key at index 1 to 30" << endl;
    heap1.decrease_key(1, 30);
    heap1.print();

    cout << "Heap sort: ";
    heap1.heap_sort();
    heap1.print();

    return 0;
}
