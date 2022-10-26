#include "angajati.h"

angajati::angajati()
{
    ///std::cout << "CONSTRUCTOR FARA PARAMETRII angajati" << '\n';
    this->nume = "Lipsa nume";
    this->prenume = "Lipsa prenume";
    this->cnp = 0;
    this->post = "Lipsa post";
    this->salariu = 0;
    this->penalizari = 0;
}
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
angajati::angajati(const angajati& other)
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

angajati::~angajati()
{
    ///std::cout << "DESTRUCTOR angajati" << '\n';
    count--;
}