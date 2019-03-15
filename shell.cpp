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
    std::cout << std::endl << "\t0 - wyjscie" << std::endl;
}

void Shell::displaySavedPolynomials(std::vector<Poly> polynomials){
    for(auto &i : polynomials){
        std::cout << "p" << i.memIndex << ": " << i << std::endl;
    }
}

void Shell::addMemPolynomial(int coeffs[POLY_DEGREE + 1], std::vector<Poly> &polynomials){
    Poly p(coeffs[3], coeffs[2], coeffs[1], coeffs[0]);
    if (!polynomials.empty()){
        Poly pLast = polynomials.back();
        p.setMemIndex(pLast.memIndex + 1);
        polynomials.push_back(p);
    }
    else{
        p.setMemIndex(0);
        polynomials.push_back(p);
    }
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

int Shell::selectPolynomial(std::vector<Poly> polynomials) {
    std::cout << "Wybierz wielomian z zapisanych (podajac jego indeks):" << std::endl;
    this->displaySavedPolynomials(polynomials);
    return getChoice();
}

int Shell::getChoice(){
    int choice;
    while (!(std::cin >> choice) || std::cin.peek() != '\n')
    {
        std::cout << "Niepoprawne dane. Wprowadz ponownie." << std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    return choice;
}

bool Shell::exeMenu(std::vector<Poly> &polynomials) {
    this->displayMainMenu();
    int menuChoice = this->getChoice();
    switch (menuChoice){
        case 0:
            return false;
        case 1:
            int coeffs[POLY_DEGREE + 1];
            this->obtainPoly(coeffs);
            this->addMemPolynomial(coeffs, polynomials);
            return true;
        case 2:
            this->deleteMemPolynomial(this->selectPolynomial(polynomials), polynomials);
            return true;
        default:
            std::cout << "elo" << std::endl << std::endl;
            return true;
    }

}


