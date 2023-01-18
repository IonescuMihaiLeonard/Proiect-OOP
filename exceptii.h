#ifndef MAIN_CPP_EXCEPTII_H
#define MAIN_CPP_EXCEPTII_H

#include <stdexcept>
#include <string>

class eroare_aplicatie : public  std::runtime_error
{
    using  std::runtime_error::runtime_error;

};

class eroare_vanzare : public eroare_aplicatie
{
    using eroare_aplicatie::eroare_aplicatie;
public:
    explicit eroare_vanzare(const std::string &mesaj) : eroare_aplicatie("eroare la vanzarea sculelor: " + mesaj) {}
};

class eroare_echipament : public eroare_aplicatie
{
    using eroare_aplicatie::eroare_aplicatie;

public:
    explicit eroare_echipament(const std::string &mesaj) : eroare_aplicatie("Eroare la folosirea sculei::" + mesaj) {}
};

class eroare_masini : public eroare_aplicatie
{

public:
    explicit eroare_masini(const std::string &mesaj) : eroare_aplicatie("Eroare Masina::" + mesaj) {}
};


#endif
