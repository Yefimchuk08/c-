#include <iostream>

using namespace std;

template <typename T>
T findMax(const T* arr, int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <typename T>
T findMin(const T* arr, int size) {
    T min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

template <typename T>
void selectionSort(T* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        T temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

template <typename T>
int binarySearch(const T* arr, int size, T key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

template <typename T>
void replaceElement(T* arr, int size, int index, T newValue) {
    if (index >= 0 && index < size)
        arr[index] = newValue;
}

int main() {
    int arr[] = { 5, 2, 8, 1, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Max: " << findMax(arr, size) << endl;
    cout << "Min: " << findMin(arr, size) << endl;

    selectionSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int index = binarySearch(arr, size, 3);
    cout << "Index of 3: " << index << endl;

    replaceElement(arr, size, 2, 10);
    cout << "Array after replacement: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
