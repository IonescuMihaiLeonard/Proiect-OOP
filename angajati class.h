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
        this->nume = "Lipsa nume";
        this->prenume = "Lipsa prenume";
        this->cnp = 0;
        this->post = "Lipsa post";
        this->salariu = 0;
        this->penalizari = 0;
    }
    explicit angajati(const class angajati* other);

    angajati(const angajati& other)
    {
        ///std::cout << "CONSTRUCTOR DE COPIERE angajati" << '\n';
        this->nume = other.nume;
        this->prenume = other.prenume;
        this->cnp = other.cnp;
        this->post = other.post;
        this->salariu = other.salariu;
        this->penalizari = other.penalizari;
        this->masina =  other.masina;
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
        this->nume = other.nume;
        this->prenume = other.prenume;
        this->cnp = other.cnp;
        this->post = other.post;
        this->salariu = other.salariu;
        this->penalizari = other.penalizari;
        this->masina = other.masina;
        return *this;
    }


};

angajati::angajati(const class angajati* other)
{
    ///std::cout << "CONSTRUCTOR CU PARAMETRII angajati" << '\n';
    this->nume = other->nume;
    this->prenume = other->prenume;
    this->cnp = other->cnp;
    this->post = other->post;
    this->salariu = other->salariu;
    this->penalizari = other->penalizari;
    this->masina =  other->masina;
}

#endif
