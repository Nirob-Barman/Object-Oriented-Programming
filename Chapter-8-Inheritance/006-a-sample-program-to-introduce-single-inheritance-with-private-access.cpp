#include <bits/stdc++.h>

using namespace std;

class Base
{
    int privateValue; // private: not inheritable

public:
    int publicValue; // public: ready for inheritance
    void setValues();
    int getPrivateValue();
    void displayPrivateValue();
};

class Derived : private Base // public inheritance
{
    int derivedValue;

public:
    void calculateDerivedValue();
    void displayValues();
};

// Set values for privateValue and publicValue
void Base::setValues()
{
    privateValue = 5;
    publicValue = 10;
}

// Get the value of privateValue
int Base::getPrivateValue()
{
    return privateValue;
}

// Display the value of privateValue
void Base::displayPrivateValue()
{
    cout << "privateValue: " << privateValue << endl;
}

// Calculate the derivedValue
void Derived::calculateDerivedValue()
{
    // necessary to call setValues() to obtain the required values
    setValues();
    derivedValue = getPrivateValue() * publicValue;
}

// Display all values
void Derived::displayValues()
{
    // cout << "privateValue: " << getPrivateValue() << endl;
    displayPrivateValue();
    cout << "publicValue: " << publicValue << endl;
    cout << "derivedValue: " << derivedValue << endl;
}

int main()
{
    Derived derivedObject;
    // derivedObject.setValues(); // won't work
    derivedObject.calculateDerivedValue(); // Calculate derivedValue
    // derivedObject.displayPrivateValue(); // won't work
    derivedObject.displayValues(); // Display values including privateValue

    // derivedObject.publicValue = 20; // won't work
    derivedObject.calculateDerivedValue(); // Recalculate derivedValue
    derivedObject.displayValues();         // Display values again

    return 0;
}

// output
// privateValue: 5
// publicValue: 10
// derivedValue: 50
// privateValue: 5
// publicValue: 10
// derivedValue: 50
