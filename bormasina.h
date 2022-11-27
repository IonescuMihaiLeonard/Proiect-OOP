#ifndef MAIN_CPP_BORMASINA_H
#define MAIN_CPP_BORMASINA_H

#include "scula.h"

class bormasina  : public scula
{
    double capacitate;
    int turatie;
    std::string acumulator;

public:
    bormasina();
    bormasina(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s, int const& stock, double const& pret, double const capacitate, int const turatie, std::string const acumulator);

    ~bormasina();

    friend std::ostream& operator<< (std::ostream& os, const bormasina& other)
    {
        os << static_cast<const scula &>(other) << "cu o turatie de " << other.turatie << "rpm, baterie de " << other.capacitate << "mAh din " << other.acumulator;
        return os;
    }

};


#endif
