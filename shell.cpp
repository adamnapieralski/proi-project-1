//
// Created by napiad on 14.03.19.
//

#include "shell.h"

void Shell::obtainPoly(int (&coeffs)[POLY_DEGREE + 1]){

    std::cout <<  "Podaj 4 calkowite wspolczynniki wielomianu 3. stopnia (zatwierdzajac enterem):" << std::endl;
    for (int i = POLY_DEGREE; i >= 0; --i){
        int temp;
        while ((std::cout << "Przy x^" << i << ": " && !(std::cin >> temp)) || std::cin.peek() != '\n')
        {
            std::cout << "Niepoprawne dane. Wprowadz ponownie." << std::endl;
            std::cin.clear();
            std::cin.ignore();
        }
        coeffs[i] = temp;
    }
}