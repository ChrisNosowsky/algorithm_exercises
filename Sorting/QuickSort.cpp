


void quickSort(int[] arr, int left, int right) {
    int index = partition(arr, left, right);
    if (left < index - 1) {
        quickSort(arr, left, right - 1);
    }
    if (left < right) {  // Sort right half
        quickSort(arr, index, right);
    }
}


int partition(int[] arr, int left, int right) {
    int pivot = arr[left + (right - left) / 2];
    while (left <= right) {
        // Find element on left that should be on right
        while (arr[left] < pivot) left++;

        // Find element on right that should be on left
        while (arr[right] > pivot) right--;

        // Swap elements and move left and right indices
        if (left <= right) {
            swap(arr, left, right);  // swap elements
            left++;
            right--;
        }
    }
}