#include <string>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<bool> sieveOfErathosthenes(int max) {
    vector<bool> flags;
    int count = 0;

    int prime = 2;

    while(prime <= sqrt(max)) {
        crossOff(flags, prime);

        prime = getNextPrime(flags, prime);
    }
    return flags;
}

void crossOff(vector<bool> flags, int prime) {
    for(int i = prime * prime; i < flags.size(); i+=prime) {
        flags[i] = false;
    }
}

int getNextPrime(vector<bool> flags, int prime) {
    int next = prime + 1;
    while (next < flags.size() && !flags[next]) {
        next++;
    }
    return next;
}
