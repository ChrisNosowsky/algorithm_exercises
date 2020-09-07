
// Notes:
// 1. Keyword "friend" is used to make some function or class as friend of your class
// 2. Friend function or class can access private/public/protected data members or member functions of another class
// 3. Function can not become friend of another function
// 4. Class can not become friend of function
// 5. Friendship is not mutual. If class A is friend of B, then B doesn't become friend of A automatically.
// 6. Friendship is not inherited

#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    Base() {}
    Base(int a):x{a} {}
    friend void set(Base&, int);
    friend int get(Base&);
    friend class GetSet;
};

class GetSet {
public:
    void set(Base &obj, int x) { obj.x = x;}
    int get(Base &obj) { return obj.x; }
};

void set(Base &obj, int x) { obj.x = x; }

int get(Base &obj) { return obj.x; }

int main() {
    Base obj(10);
    cout << get(obj) << endl;
    set(obj, 20);
    cout << get(obj) << endl;
    GetSet gs;
    cout << gs.get(obj) << endl;
    gs.set(obj, 25);
    cout << gs.get(obj) << endl;
    return 0;
}