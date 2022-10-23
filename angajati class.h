#ifndef MAIN_CPP_ANGAJATI_CLASS_H
#define MAIN_CPP_ANGAJATI_CLASS_H

#include <iostream>
#include <vector>
#include "scule class.h"
#include "masini class.h"

class angajati
{
private:
    static int count;
    std::string nume;
    std::string prenume;
    long long cnp;
    std::string post;
    unsigned int salariu;
    unsigned int penalizari;
    masini masina;

public:
    angajati()
    {
        ///std::cout << "CONSTRUCTOR FARA PARAMETRII angajati" << '\n';
        nume = "Lipsa nume";
        prenume = "Lipsa prenume";
        cnp = 0;
        post = "Lipsa post";
        salariu = 0;
        penalizari = 0;
    }
    angajati(const angajati* other)
    {
        ///std::cout << "CONSTRUCTOR CU PARAMETRII angajati" << '\n';
        nume = other->nume;
        prenume = other->prenume;
        cnp = other->cnp;
        post = other->post;
        salariu = other->salariu;
        penalizari = other->penalizari;
        masina =  other->masina;
    }
    angajati(const angajati& other)
    {
        ///std::cout << "CONSTRUCTOR DE COPIERE angajati" << '\n';
        nume = other.nume;
        prenume = other.prenume;
        cnp = other.cnp;
        post = other.post;
        salariu = other.salariu;
        penalizari = other.penalizari;
        masina =  other.masina;
    }

    ~angajati()
    {
        ///std::cout << "DESTRUCTOR angajati" << '\n';
        count--;
    }

    friend std::ostream& operator<< (std::ostream& os, const angajati& other)
    {
        os << other.nume << "|" << other.prenume << "|" << other.cnp << "|" << other.post << "|" << other.salariu << "| -" << other.penalizari << '\n';
        os << other.masina;

        for(int i=0; i<= 100; i++)
            os << "-";

        os <<'\n';
        return os;
    }

    static int get_count()
    {
        return count;
    }

    angajati& operator= (const angajati& other)
    {
        nume = other.nume;
        prenume = other.prenume;
        cnp = other.cnp;
        post = other.post;
        salariu = other.salariu;
        penalizari = other.penalizari;
        masina = other.masina;
        return *this;
    }
};

#endif
