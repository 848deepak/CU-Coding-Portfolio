#include <iostream>

using namespace std;

int main() {
   
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** arr1 = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        arr1[i] = new int[cols];
    }

    int** arr2 = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        arr2[i] = new int[cols];
    }

    int** sum = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        sum[i] = new int[cols];
    }

   
    cout << "Enter elements for the first 2D array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr1[i][j];
        }
    }

   
    cout << "Enter elements for the second 2D array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr2[i][j];
        }
    }

    cout << "The sum of the 2D arrays:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

   

    return 0;
}
