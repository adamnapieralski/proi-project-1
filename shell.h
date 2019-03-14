//
// Created by napiad on 14.03.19.
//

#ifndef SHELL_H
#define SHELL_H

#include "polynomial.h"
#include <string>
#include <sstream>

class Shell{
public:
    void obtainPoly(int (&coeffs)[POLY_DEGREE + 1]);
};

#endif //SHELL_H

