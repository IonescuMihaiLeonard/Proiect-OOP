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
    count++;
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
    count++;
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
    count++;
}
angajati::angajati(const std::string nume, const std::string prenume, const long long cnp, const std::string post, const unsigned int salariu, const unsigned int penalizari)
{
    this-> nume = nume;
    this-> prenume = prenume;
    this-> cnp = cnp;
    this-> post = post;
    this-> salariu = salariu;
    this-> penalizari = penalizari;
    count++;
}

angajati::~angajati()
{
    ///std::cout << "DESTRUCTOR angajati" << '\n';
    count--;
}