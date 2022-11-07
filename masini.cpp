#include "masini.h"

masini::masini()
{
    ///std::cout << "CONSTRUCTOR FARA PARAMETRII masini" << '\n';
    this->marca = "Lipsa marca";
    this->model = "Lipsa model";
    this->motorizare = "Lipsa Motorizare";
    this->transmisie = "Lipsa transmisie";
    this->culoare_p = culoare_t::lipsa;
    this->culoare_s = culoare_t::lipsa;
    this->numar_de_inmatriculare = "Lipsa";
    this->cilindree = 0;
    this->an_fabricatie = 0;
    count++;
}
masini::masini(const class masini* other)
{
    ///std::cout << "CONSTRUCTOR CU PARAMETRII masini" << '\n';
    this->marca = other->marca;
    this->model = other->model;
    this->motorizare = other->motorizare;
    this->transmisie = other->transmisie;
    this->culoare_p = other->culoare_p;
    this->culoare_s = other->culoare_s;
    this->numar_de_inmatriculare = other->numar_de_inmatriculare;
    this->cilindree = other->cilindree;
    this->an_fabricatie = other->an_fabricatie;
    for (unsigned long long i=0; i<other->scule.size(); i++)
        this->scule.push_back(other->scule[i]);
    count++;
}
masini::masini(const masini& other)
{
    ///std::cout << "CONSTRUCTOR DE COPIERE masini" << '\n';
    this->marca = other.marca;
    this->model = other.model;
    this->motorizare = other.motorizare;
    this->transmisie = other.transmisie;
    this->culoare_p = other.culoare_p;
    this->culoare_s = other.culoare_s;
    this->numar_de_inmatriculare = other.numar_de_inmatriculare;
    this->cilindree = other.cilindree;
    this->an_fabricatie = other.an_fabricatie;
    for (unsigned long long i=0; i<other.scule.size(); i++)
        this->scule.push_back(other.scule[i]);
    count++;
}
masini::masini(const std::string marca, const std::string model, const std::string motorizare, const std::string transmisie, const culoare_t culoare_p, const culoare_t culoare_s, const std::string numar_de_inmatriculare, const unsigned short cilindree, const unsigned short an_fabricatie)
{
    this-> marca = marca;
    this-> model = model;
    this-> motorizare = motorizare;
    this-> transmisie = transmisie;
    this-> culoare_p = culoare_p;
    this-> culoare_s = culoare_s;
    this-> numar_de_inmatriculare = numar_de_inmatriculare;
    this-> cilindree = cilindree;
    this-> an_fabricatie = an_fabricatie;
    count++;
}
masini::~masini()
{
    ///std::cout << "DESTRUCTOR masini" << '\n';
    count--;
}