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
    Poly p0, p1(3), p2(4, 5), p3(7, 8, 9), p4(9, 0, 2, 3);

    cout << "Drukowanie zawartosci:" << endl;
    cout << p0 << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl << endl;


    Poly p5(7, 8, 9);
    cout << "Badanie identycznosci:" << endl;
    cout << (p3 == p5) << endl;
    cout << (p0 != p1) << endl << endl;

    cout << "Dodawanie" << endl;
    cout << p3 + p4 << endl;
    p1 += p2;
    cout << p1 << endl << endl;

    cout << "Odejmowanie" << endl;
    cout << p4 - p2 << endl;
    p1 -= p2;
    cout << p1 << endl << endl;

    cout << "Mnozenie" << endl;
    cout << p3 * p2 << endl;
    cout << p2 * p2 << endl;

    return 0;
}