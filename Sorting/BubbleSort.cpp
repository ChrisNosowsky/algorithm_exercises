#include <math.h>;


class Solution {
    void bubblesort(int arry[]) {
        bool isSorted = false;
        int lastUnsorted = sizeof(arry)/sizeof(arry[0]) - 1;
        while(!isSorted) {
            isSorted = true;
            for(int i=0; i < lastUnsorted; i++) {
                if (arry[i] > arry[i+1]) {
                    swap(arry, i, i + 1);
                    isSorted = false;
                }
            }
            lastUnsorted--;
        }
    }

    void swap(int array[], int i, int j) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
};