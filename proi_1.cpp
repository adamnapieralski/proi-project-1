/*
 * Name: proi_1.cpp
 * Purpose: PROI project - polynomials - overloading operators - class basics
 * @author Adam Napieralski
 * @version 0.2 15/03/2019
 */

#include <iostream>
#include <vector>
#include "polynomial.h"
#include "shell.h"

using namespace std;

int main() {
    //vector containing saved polynomials
    vector<Poly> polynomials;

    Shell shell;

    while(shell.exeMenu(polynomials)) { }
    return 0;
}