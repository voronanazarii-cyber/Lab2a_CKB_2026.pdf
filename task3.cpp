// task3.cpp - Задача 3, варіант 3
#include <iostream>
#include "task3.h"
using namespace std;

int main() {
    double a, b, c, d, z;
    const char *why;
    cout << "Input a, b, c, d: ";
    if (!(cin >> a >> b >> c >> d)) { cout << "Wrong input." << endl; return 1; }
    if (calcZ(a, b, c, d, z, why)) cout << "z = " << z << endl;
    else cout << "The problem cannot be solved: " << why << "." << endl;
    return 0;
}
