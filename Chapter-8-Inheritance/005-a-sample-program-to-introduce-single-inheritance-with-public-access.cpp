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

class Derived : public Base // public inheritance
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
    derivedValue = getPrivateValue() * publicValue;
}

// Display all values
void Derived::displayValues()
{
    cout << "privateValue: " << getPrivateValue() << endl;
    cout << "publicValue: " << publicValue << endl;
    cout << "derivedValue: " << derivedValue << endl;
}

int main()
{
    Derived derivedObject;
    derivedObject.setValues();
    derivedObject.calculateDerivedValue();
    derivedObject.displayPrivateValue();
    derivedObject.displayValues();

    derivedObject.publicValue = 20;
    derivedObject.calculateDerivedValue();
    derivedObject.displayValues();

    return 0;
}

// output
// privateValue: 5
// privateValue: 5
// publicValue: 10
// derivedValue: 50
// privateValue: 5
// publicValue: 20
// derivedValue: 100