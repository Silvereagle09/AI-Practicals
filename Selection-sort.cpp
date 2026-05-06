#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selection_sort(arr);
    cout << "Sorted array: "<<endl;
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}