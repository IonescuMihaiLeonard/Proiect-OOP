#include "lopata.h"
#include "scula.h"

lopata::lopata()
{
    this->suprafata_faras = 0;
    this->lungime_maner = 0;
    count++;
    creeare_scula();
}



lopata::~lopata()
{
    count--;
    destructor_scula();

}

lopata::lopata(std::string const& denumire ,std::string const& marca ,culoare_t const&culoare_p ,
               culoare_t const& culoare_s ,int const& stock ,double const& pret , double const& suprafata_faras ,
               int const& lungime_maner) :
        scula(denumire, marca, culoare_p, culoare_s, stock, pret),
        suprafata_faras(suprafata_faras),
        lungime_maner(lungime_maner)
{
    count++;
    creeare_scula();
}
