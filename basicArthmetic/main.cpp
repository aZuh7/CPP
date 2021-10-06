#include <iostream>

using namespace std;

int main()
{
    int x = 4 + 6; // Addition operator
    cout << x;

    int y = 8 - 6; // Subtraction operator
    cout << y;

    int z = 8 * 4; // Multiplication operator
    cout << z;

    int a = 81 / 3; // Division operator
    cout << a;

    int b = 81 % 2; // Modulus operator that gives only the remainder
    cout << b;

    // Order of precedence
    int c = 6 * (4 + 8) * 4 + 9 / 20; // PEMDAS A.K.A Associative Property.
    cout << c;

    return 0;
}
