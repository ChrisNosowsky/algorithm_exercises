#include <vector>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int main() {
    int a = 5;
    int &b = a;
    b = 7;
    cout << a; // should print 7
}
