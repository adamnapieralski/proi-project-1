/*
 * Name: proi_1.cpp
 * Purpose: PROI project - polynomials - overloading operators - class basics
 * @author Adam Napieralski
 * @version 0.1 11/03/2019
 */

#include <iostream>
#include "polynomial.h"

using namespace std;

int main() {
    Poly p1(4, 0, 0);
    Poly p2(3, 4, 3, 10);

    Poly p3 = p1 + p2;

    cout << p3;

    return 0;
}