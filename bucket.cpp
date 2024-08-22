#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to implement Bucket Sort
void bucketSort(vector<float>& arr, int numBuckets) {
    int n = arr.size();
    vector<vector<float>> buckets(numBuckets);

    // Distribute the elements into the buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = numBuckets * arr[i];  // Index in the bucket
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort each bucket and concatenate the results
    for (int i = 0; i < numBuckets; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    vector<float> arr = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    int numBuckets = 5;  // You can adjust the number of buckets based on the input

    cout << "Original array: ";
    for (float i : arr)
        cout << i << " ";
    cout << endl;

    bucketSort(arr, numBuckets);

    cout << "Sorted array: ";
    for (float i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
