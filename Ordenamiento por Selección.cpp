#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = {580, 320, 760, 435, 520};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons;

    selectionSort(arr, n, comparisons);
    cout << "Orden ascendente: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTotal de comparaciones: " << comparisons << endl;
    return 0;
}
