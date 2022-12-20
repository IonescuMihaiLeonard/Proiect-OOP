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

class eroare_echipare : public eroare_aplicatie
{
    using eroare_aplicatie::eroare_aplicatie;

public:
    explicit eroare_echipare(const std::string &mesaj) : eroare_aplicatie("eroare la echiparea masinii: " + mesaj) {}
};


#endif
