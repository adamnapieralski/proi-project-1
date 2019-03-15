//
// Created by napiad on 14.03.19.
//

#ifndef SHELL_H
#define SHELL_H

#include <string>
#include <sstream>
#include <vector>
#include "polynomial.h"


class Shell{
public:
    void obtainPoly(int (&coeffs)[POLY_DEGREE + 1]);
    void displayMainMenu();
    void displaySavedPolynomials(std::vector<Poly> polynomials);
    void addMemPolynomial(int coeffs[POLY_DEGREE + 1], std::vector<Poly> &polynomials);
    void deleteMemPolynomial(int memIndex, std::vector<Poly> &polynomials);
};

#endif //SHELL_H

