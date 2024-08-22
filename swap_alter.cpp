#include <iostream>
using namespace std;

void sawpalter(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        if (i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void dsplay(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[5] = {11, 131, 11, 12, 13};

    sawpalter(arr, 8);
    dsplay(arr, 8);

    return 0;
}
