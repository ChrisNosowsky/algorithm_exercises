#include <math.h>

bool primeOptimized(int n) {
    if (n < 2) {
        return false;
    }
    int sqrte = (int) sqrt(n);
    for (int i=2; i<=sqrte; i++) {
        if(n % i == 0) return false;
    }
    return true;
}