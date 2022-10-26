#ifndef MAIN_CPP_MASINI_H
#define MAIN_CPP_MASINI_H

#include <iostream>
#include <vector>
#include "enum.h"
#include "scule.h"

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

    ~masini();

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

};


#endif
