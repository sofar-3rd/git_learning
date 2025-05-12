#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Quick sort
// Time complexity: O(n log n) on average, O(n^2) in the worst case

vector<int> quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
    return arr;
}

int main() {

}