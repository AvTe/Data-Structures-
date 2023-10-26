#include <iostream>
#include <vector>

using namespace std;

// Binary search function
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target;

    cout << "Enter the number you want to search for: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
