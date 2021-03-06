/*
 * Name: polynomial.h
 * Purpose: Custom library header file with class for polynomials management
 * @author Adam Napieralski
 * @version 0.2 11/03/2019
 */

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <string>

#define POLY_DEGREE 3

class Poly{

public:
    int memIndex;
    int a[POLY_DEGREE + 1];

    Poly();
    Poly(int a0);
    Poly(int a1, int a0);
    Poly(int a2, int a1, int a0);
    Poly(int a3, int a2, int a1, int a0);

    int getDegree();
    void setMemIndex(int num);

    friend std::ostream& operator<<(std::ostream& os, const Poly& p1);
    friend bool operator==(Poly p1, Poly p2);
    friend bool operator!=(Poly p1, Poly p2);
    friend Poly operator+(Poly p1, Poly p2);
    friend Poly& operator+=(Poly& p1, Poly p2);
    friend Poly operator-(Poly p1, Poly p2);
    friend Poly& operator-=(Poly& p1, Poly p2);
    friend Poly operator*(Poly p1, Poly p2);
    friend Poly& operator*=(Poly& p1, Poly p2);
};

#endif //POLYNOMIAL_H
