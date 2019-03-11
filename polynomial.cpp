//
// Created by napiad on 11.03.19.
//

/*
 * Name: polynomial.h
 * Purpose: Custom library .cpp file with class for polynomials management
 * @author Adam Napieralski
 * @version 0.1 11/03/2019
 */

#include "polynomial.h"



Poly::Poly() {
    for(int i = 0; i < POLY_DEGREE + 1; i++)
        this->a[i] = 0;
}
Poly::Poly(int a0) {
    for(int i = 0; i < POLY_DEGREE + 1; i++)
        this->a[i] = 0;
    this->a[0] = a0;
}
Poly::Poly(int a1, int a0) {
    for(int i = 0; i < POLY_DEGREE + 1; i++)
        this->a[i] = 0;
    this->a[0] = a0;
    this->a[1] = a1;
}
Poly::Poly(int a2, int a1, int a0) {
    for(int i = 0; i < POLY_DEGREE + 1; i++)
        this->a[i] = 0;
    this->a[0] = a0;
    this->a[1] = a1;
    this->a[2] = a2;
}
Poly::Poly(int a3, int a2, int a1, int a0) {
    for(int i = 0; i < POLY_DEGREE + 1; i++)
        this->a[i] = 0;
    this->a[0] = a0;
    this->a[1] = a1;
    this->a[2] = a2;
    this->a[3] = a3;
}

Poly operator+(Poly p1, Poly p2){
    Poly pRes;
    for(int i = 0; i < POLY_DEGREE + 1; i++)
        pRes.a[i] = p1.a[i] + p2.a[i];
    return pRes;
}

std::ostream& operator<<(std::ostream& os, const Poly& p1) {

    int minCoeff = -1;
    //finding lowest nonzero coefficient index
    for(int i = 0; i < POLY_DEGREE + 1; i++){
        if(p1.a[i]){
            minCoeff = i;
            break;
        }
    }
    //if there are no nonzero coeff -> whole polynomial == 0
    if (minCoeff == -1)
        os << 0;
    else{
        for (int i = POLY_DEGREE; i >= 0; i--) {
            if (p1.a[i]) {
                if (i)
                    os << p1.a[i] << "x^" << i;
                else
                    os << p1.a[i];

                if (i > minCoeff)
                    os << " + ";
                else
                    os << std::endl;
            }
        }
    }
    return os;
}
