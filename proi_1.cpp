/*
 * Name: proi_1.cpp
 * Purpose: PROI project - polynomials - overloading operators - class basics
 * @author Adam Napieralski
 * @version 0.1 11/03/2019
 */

#include <iostream>
#include <vector>
#include "polynomial.h"
#include "shell.h"

using namespace std;

int main() {
    Poly p0, p1(3), p2(4, 5), p3(7, 8, 9), p4(9, 0, 2, 3);
    p0.setMemIndex(0);
    p1.setMemIndex(1);
    p2.setMemIndex(2);
    p3.setMemIndex(3);
    p4.setMemIndex(4);
    vector<Poly> polynomials;
    polynomials.push_back(p0);
    polynomials.push_back(p1);
    polynomials.push_back(p2);
    polynomials.push_back(p3);
    polynomials.push_back(p4);
    
    int coeffs[POLY_DEGREE + 1] = {1, 2, 3, 4};
    Shell shell;
    shell.obtainPoly(coeffs);
    cout << coeffs[0] << " " << coeffs[1] << " " << coeffs[2] << " " << coeffs[3] << endl;
    shell.displayMainMenu();
    shell.displaySavedPolynomials(polynomials);
    shell.addMemPolynomial(coeffs, polynomials);
    shell.displaySavedPolynomials(polynomials);
    shell.deleteMemPolynomial(4, polynomials);
    shell.displaySavedPolynomials(polynomials);

    return 0;
}