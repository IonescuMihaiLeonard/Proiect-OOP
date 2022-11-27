#include "bormasina.h"

bormasina::bormasina()
{
    this->capacitate = 0;
    this->turatie = 0;
    this->acumulator = "Lipsa";
}
bormasina::bormasina(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p,
                     culoare_t const& culoare_s, int const& stock, double const& pret, double const capacitate,
                     int const turatie, std::string const acumulator) :
                     scula(denumire, marca, culoare_p, culoare_s, stock, pret),
                     capacitate(capacitate),
                     turatie(turatie),
                     acumulator(acumulator){}



bormasina::~bormasina()
{
    ///std::cout << "Am sters bormasina";
}