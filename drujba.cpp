#include "scula.h"
#include "drujba.h"


drujba::drujba()
{
    this->putere = 0;
    this->lg_sina = 0;
    this->cilindree = 0;
    count++;
    creeare_scula();
}
drujba::drujba(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s,
               int const& stock, double const& pret, double const putere, double const lg_sina, double const cilindree):
               scula(denumire, marca, culoare_p, culoare_s, stock, pret),
               putere(putere), lg_sina(lg_sina), cilindree(cilindree)
               {
                   count++;
                   creeare_scula();
               }


drujba::~drujba()
{
    count--;
    destructor_scula();
    ///std::cout<<"destr drujba";
}
