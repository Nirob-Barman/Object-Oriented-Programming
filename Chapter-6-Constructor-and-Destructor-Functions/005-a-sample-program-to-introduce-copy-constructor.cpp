// a sample program to introduce copy constructor
#include <bits/stdc++.h>

using namespace std;

class Code
{
    int id;

public:
    Code() {}

    Code(int a)
    {
        id = a;
    }

    Code(Code &x)
    {
        id = x.id;
    }

    void display()
    {
        cout << id << endl;
    }
};

int main()
{
    Code A(100); // object A is created and initialized
    Code B(A);   // copy constructor called
    Code C = A;  // copy constructor called again
    cout << "Id of A: ";
    A.display();
    cout << "Id of B: ";
    B.display();
    cout << "Id of C: ";
    C.display();

    return 0;
}

// output
// Id of A: 100
// Id of B: 100
// Id of C: 100
