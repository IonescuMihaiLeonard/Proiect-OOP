#include "scule.h"

scule::scule()
{
    ///std::cout << "CONSTRUCTOR FARA PARAMETRII scule" << '\n';
    this->denumire = "Lipsa denumire";
    this->marca = "Lipsa marca";
    this->culoare_p = culoare_t::lipsa;
    this->culoare_s = culoare_t::lipsa;
    this->stock = 0;
    count++;
}
scule::scule(const class scule* other)
{
    ///std::cout << "CONSTRUCTOR CU PARAMETRII scule" << '\n';
    this->denumire = other->denumire;
    this->marca = other->marca;
    this->culoare_p = other->culoare_p;
    this->culoare_s = other->culoare_s;
    this->stock = other->stock;
    count++;
}
scule::scule(const scule& other)
{
    ///std::cout << "CONSTRUCTOR PRIN REFERINTA scule" << '\n';
    this->denumire = other.denumire;
    this->marca = other.marca;
    this->culoare_p = other.culoare_p;
    this->culoare_s = other.culoare_s;
    this->stock = other.stock;
    count++;
}

scule::~scule()
{
    ///std::cout << "DESTRUCTOR scule" << '\n';
    count--;
}