#include "masini.h"

masini::masini()
{
    ///std::cout << "CONSTRUCTOR FARA PARAMETRII masini" << '\n';
    this->marca = "Lipsa marca";
    this->model = "Lipsa model";
    this->culoare_p = culoare_t::lipsa;
    this->culoare_s = culoare_t::lipsa;
    this->numar_de_inmatriculare = "Lipsa";
    this->cilindree = 0;
    count++;
}
masini::masini(const class masini* other)
{
    ///std::cout << "CONSTRUCTOR CU PARAMETRII masini" << '\n';
    this->marca = other->marca;
    this->model = other->model;
    this->culoare_p = other->culoare_p;
    this->culoare_s = other->culoare_s;
    this->numar_de_inmatriculare = other->numar_de_inmatriculare;
    this->cilindree = other->cilindree;
    for (unsigned long long i=0; i<other->scule.size(); i++)
        this->scule.push_back(other->scule[i]);
    count++;
}
masini::masini(const masini& other)
{
    ///std::cout << "CONSTRUCTOR DE COPIERE masini" << '\n';
    this->marca = other.marca;
    this->model = other.model;
    this->culoare_p = other.culoare_p;
    this->culoare_s = other.culoare_s;
    this->numar_de_inmatriculare = other.numar_de_inmatriculare;
    this->cilindree = other.cilindree;
    for (unsigned long long i=0; i<other.scule.size(); i++)
        this->scule.push_back(other.scule[i]);
    count++;
}

masini::~masini()
{
    ///std::cout << "DESTRUCTOR masini" << '\n';
    count--;
}