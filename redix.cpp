#include <iostream>
#include <algorithm>

using namespace std;

// Function to perform counting sort based on a digit represented by exp
void countingSort(int arr[], int n, int exp) {
    int* output = new int[n];  // Output array
    int count[10] = {0};

    // Store count of occurrences in count[]
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] contains the actual position of this digit in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr now contains sorted numbers according to the current digit
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    // Clean up the dynamically allocated memory
    delete[] output;
}

// Function to implement Radix Sort
void radixSort(int arr[], int n) {
    // Find the maximum number to know the number of digits
    int maxVal = *max_element(arr, arr + n);

    // Do counting sort for every digit. The exp is 10^i where i is the current digit number
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    const int size = 8;
    int arr[size] = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    radixSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
