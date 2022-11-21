#include "angajat.h"

angajat::angajat()
{
    ///std::cout << "CONSTRUCTOR FARA PARAMETRII angajat" << '\n';
    this->nume = "Lipsa nume";
    this->prenume = "Lipsa prenume";
    this->cnp = 0;
    this->post = "Lipsa post";
    this->salariu = 0;
    this->penalizari = 0;
    count++;
}
angajat::angajat(const class angajat* other)
{
    ///std::cout << "CONSTRUCTOR CU PARAMETRII angajat" << '\n';
    this->nume = other->nume;
    this->prenume = other->prenume;
    this->cnp = other->cnp;
    this->post = other->post;
    this->salariu = other->salariu;
    this->penalizari = other->penalizari;
    this->masina =  other->masina;
    count++;
}
angajat::angajat(const angajat& other)
{
    ///std::cout << "CONSTRUCTOR DE COPIERE angajat" << '\n';
    this->nume = other.nume;
    this->prenume = other.prenume;
    this->cnp = other.cnp;
    this->post = other.post;
    this->salariu = other.salariu;
    this->penalizari = other.penalizari;
    this->masina =  other.masina;
    count++;
}
angajat::angajat(std::string const& nume, std::string const& prenume, long long const& cnp, std::string const& post, unsigned int const& salariu, unsigned int const& penalizari)
{
    this-> nume = nume;
    this-> prenume = prenume;
    this-> cnp = cnp;
    this-> post = post;
    this-> salariu = salariu;
    this-> penalizari = penalizari;
    count++;
}

angajat::~angajat()
{
    ///std::cout << "DESTRUCTOR angajat" << '\n';
    count--;
}