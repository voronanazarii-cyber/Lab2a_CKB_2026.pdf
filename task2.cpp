// task2.cpp - Задача 2, варіант 3
#include <iostream>
#include "task2.h"
using namespace std;

int main() {
    double h, a, b, c, x1, x2;
    const char *why;
    cout << "Input real number h: ";
    if (!(cin >> h)) { cout << "Wrong input." << endl; return 1; }

    if (!calcCoeffs(h, a, b, c, why)) {
        cout << "The problem cannot be solved: " << why << "." << endl;
        return 1;
    }
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    int n = solveQuadratic(a, b, c, x1, x2);
    if (n < 0)       cout << "The problem cannot be solved: overflow in the discriminant." << endl;
    else if (n == 0) cout << "No real roots." << endl;
    else if (n == 1) cout << "One root: x = " << x1 << endl;
    else             cout << "Two roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    return 0;
}
