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

void Shell::displayMainMenu() {
    std::cout << "MENU" << std::endl;
    std::cout << "\t1 - zapisz nowy wielomian" << std::endl;
    std::cout << "\t2 - usuń wielomian" << std::endl;
    std::cout << "\t3 - wyswietl wprowadzone wielomiany" << std::endl;
    std::cout << "\t4 - dodaj wielomiany" << std::endl;
    std::cout << "\t5 - odejmij wielomiany" << std::endl;
    std::cout << "\t6 - pomnoz wielomiany" << std::endl;
    std::cout << "\t7 - zbadaj identycznosc wielomianow" << std::endl;
}

void Shell::displaySavedPolynomials(std::vector<Poly> polynomials){
    for(auto &i : polynomials){
        std::cout << "p" << i.memIndex << ": " << i << std::endl;
    }
}

void Shell::addMemPolynomial(int coeffs[POLY_DEGREE + 1], std::vector<Poly> &polynomials){
    Poly p(coeffs[3], coeffs[2], coeffs[1], coeffs[0]);
    Poly pLast = polynomials.back();
    p.setMemIndex(pLast.memIndex + 1);
    polynomials.push_back(p);
}

void Shell::deleteMemPolynomial(int memIndex, std::vector<Poly> &polynomials){
    int vIndex = 0;
    for(auto &i : polynomials){
        if(i.memIndex == memIndex){
            polynomials.erase(polynomials.begin() + vIndex);
            break;
        }
        ++vIndex;
    }
}

