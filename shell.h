/*
 * Name: shell.h
 * Purpose: Custom library header file with class for user interface management
 * @author Adam Napieralski
 * @version 0.2 15/03/2019
 */

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
    int selectPolynomial(std::vector<Poly> polynomials);
    Poly getPoly(int memIndex, std::vector<Poly> polynomials);
    int getChoice();

    bool exeMenu(std::vector<Poly> &polynomials);
};

#endif //SHELL_H

