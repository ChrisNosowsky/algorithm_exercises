#include <stdio.h>
#include <vector>


int binarySearch(std::vector<int> a, int x) {
    int low = 0;
    int high = a.size();
    int mid;

    while(low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] < x) {
            low = mid + 1;
        } else if (a[mid] > x) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;  // Error
}


int binarySearchRecursive(std::vector<int> a, int x, int low, int high) {
    if (low > high) return -1;  // Error

    int mid = low + ((high - low) / 2);
    if(a[mid] < x) {
        return binarySearchRecursive(a, x, mid + 1, high);
    } else if (a[mid] > x) {
        return binarySearchRecursive(a, x, low, mid - 1);
    } else {
        return mid;
    }
}