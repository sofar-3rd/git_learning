#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Quick sort
// Time complexity: O(n log n) on average, O(n^2) in the worst case

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

vector<int> quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
    return arr;
}

int main() {
    // test
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    vector<int> res = quicksort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (auto & num : res){
        cout << num << " ";
    }
}
