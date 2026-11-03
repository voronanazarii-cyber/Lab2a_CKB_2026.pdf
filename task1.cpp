// task1.cpp - Задача 1, варіант 3
#include <iostream>
#include "task1.h"
using namespace std;

int main() {
    double x, y, u;
    cout << "Input x and y: ";
    if (!(cin >> x >> y)) {
        cout << "Wrong input." << endl;
        return 1;
    }
    cout << (inD(x, y) ? "YES: " : "NO: ") << "x = " << x << ", y = " << y;
    if (calcU(x, y, u)) cout << ", u = " << u << endl;
    else                cout << ". It is impossible to calculate u." << endl;
    return 0;
}
