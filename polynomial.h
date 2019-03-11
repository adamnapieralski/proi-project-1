/*
 * Name: polynomial.h
 * Purpose: Custom library header file with class for polynomials management
 * @author Adam Napieralski
 * @version 0.1 11/03/2019
 */

#ifndef PROI_PROJECT_1_POLYNOMIAL_H
#define PROI_PROJECT_1_POLYNOMIAL_H

#include <iostream>

#define POLY_DEGREE 3

class Poly{

public:
    int a[POLY_DEGREE + 1];

    Poly();
    Poly(int a0);
    Poly(int a1, int a0);
    Poly(int a2, int a1, int a0);
    Poly(int a3, int a2, int a1, int a0);

    friend Poly operator+(Poly p1, Poly p2);
    friend std::ostream& operator<<(std::ostream& os, const Poly& p1);

};


#endif //PROI_PROJECT_1_POLYNOMIAL_H
