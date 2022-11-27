#ifndef MAIN_CPP_POLIZOR_H
#define MAIN_CPP_POLIZOR_H

#include "scula.h"

class polizor : public scula
{
    int putere;
    int turatie;

public:
    polizor();
    polizor(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s, int const& stock, double const& pret, int const& putere, int const& turatie);

    friend std::ostream& operator<< (std::ostream& os, const polizor& other)
    {
        os << static_cast<const scula &>(other) << "cu o turatie de " << other.turatie << "rpm si putere de " << other.putere << "W";
        return os;
    }

    ~polizor();
};


#endif