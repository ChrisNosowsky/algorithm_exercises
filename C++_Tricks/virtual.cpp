#include <iostream>
using namespace std;

class Base {
public:
    virtual void NameOf();  // Virtual
    void InvokingClass();   // Non-Virtual
};


void Base::NameOf() {
    cout << "Base::NameOf\n";
}

void Base::InvokingClass() {
    cout << "Base::InvokingClass\n";
}

class Derived : public Base {
public:
    void NameOf();  // Virtual
    void InvokingClass();  // Non-Virtual
};

void Derived::NameOf() {
    cout << "Derived::NameOf\n";
}

void Derived::InvokingClass() {
    cout << "Derived::InvokingClass\n";
}

int main() {
    Derived aDerived;

    Derived *pDerived = &aDerived;
    Base *pBase = &aDerived;

    pBase->NameOf();            // Call virtual function.
    pBase->InvokingClass();     // Call non-virtual function.
    pDerived->NameOf();         // Call virtual function.
    pDerived->InvokingClass();  // Call non-virtual function.

}


