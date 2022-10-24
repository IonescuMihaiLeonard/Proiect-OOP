#ifndef MAIN_CPP_MASINI_CLASS_H
#define MAIN_CPP_MASINI_CLASS_H

#include <iostream>
#include <vector>
#include "enum.h"
#include "scule class.h"

class masini
{
private:
    static int count;
    std::string marca;
    std::string model;
    culoare_t culoare_p;
    culoare_t culoare_s;
    std::string numar_de_inmatriculare;
    unsigned short cilindree;
    std::vector<class scule> scule;

public:
    masini();

    explicit masini(const class masini* other);

    masini(const masini& other);

    ~masini()
    {
        ///std::cout << "DESTRUCTOR masini" << '\n';
        count--;
    }

    friend std::ostream& operator<< (std::ostream& os, const masini& other)
    {
        os << other.marca << "|" << other.model << "|" << other.numar_de_inmatriculare << "|" << other.culoare_p << "|" << other.culoare_s << "|" << other.cilindree << '\n';
        for (unsigned long long i=0; i<other.scule.size(); i++)
            os << other.scule[i] << "\n";

        for(int i=0; i<= 100; i++)
            os << "-";

        os <<'\n';
        return os;
    }

    static int get_count()
    {
        return count;
    }

    void set_marca(const std::string& x)
    {
        this->marca = x;
    }
    void set_model(const std::string& x)
    {
        this->model = x;
    }
    void set_culoare_p(const culoare_t x)
    {
        this->culoare_p = x;
    }
    void set_culoare_s(const culoare_t x)
    {
        this->culoare_s = x;
    }
    void set_numar_de_inmatriculare(const std::string& x)
    {
        this->numar_de_inmatriculare = x;
    }
    void set_cilindree(const unsigned short x)
    {
        this->cilindree = x;
    }
    /**void set_scule(std::vector<scule> s)
    {

    }**/

    masini& operator= (const masini& other)
    {
        this->marca = other.marca;
        this->model = other.model;
        this->culoare_p = other.culoare_p;
        this->culoare_s = other.culoare_s;
        this->numar_de_inmatriculare = other.numar_de_inmatriculare;
        this->cilindree = other.cilindree;
        for (unsigned long long i=0; i<other.scule.size(); i++)
            this->scule.push_back(other.scule[i]);

        return *this;
    }
};
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
#endif
