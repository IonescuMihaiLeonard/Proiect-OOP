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
    std::string motorizare;
    std::string transmisie;
    culoare_t culoare_p;
    culoare_t culoare_s;
    std::string numar_de_inmatriculare;
    unsigned short cilindree;
    unsigned short an_fabricatie;
    std::vector<class scule> scule;

public:
    masini();

    explicit masini(const class masini* other);

    masini(const masini& other);
    masini(const std::string marca, const std::string model, const std::string motorizare, const std::string transmisie, const culoare_t culoare_p, const culoare_t culoare_s, const std::string numar_de_inmatriculare, const unsigned short cilindree, const unsigned short an_fabricatie);

    ~masini();

    friend std::ostream& operator<< (std::ostream& os, const class masini& other)
    {
        os << "In masina " << other.marca << " " << other.model << " din anul " << other.an_fabricatie << " cu motorul " << other.motorizare << " de " << other.cilindree << "cmc" << "\n";
        os << "si cutie "<< other.transmisie <<" cu numarul de inmatriculare " << other.numar_de_inmatriculare << " culoarea " << other.culoare_p << " cu " << other.culoare_s << " " << '\n';
        os << "se afla urmatoarele scule:" << '\n';

        for (unsigned long long i=0; i<other.scule.size(); i++)
            os << "---" << other.scule[i];

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
    void set_motorizare(const std::string& x)
    {
        this->motorizare = x;
    }
    void set_transmisie(const std::string& x)
    {
        this->transmisie = x;
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
    void set_an_fabricatie(const unsigned short x)
    {
        this->an_fabricatie = x;
    }

    int adaugare_scula(class scule& s, const int nrs)
    {
        class scule temp = s;
        if(nrs < s.get_stock())
        {
            temp.set_stock(nrs);
            int x = s.get_stock() - nrs;
            s.set_stock(x);
            this->scule.push_back(temp);
            return 1;
        }
        else
        {
            std::cout << "Nu ai suficiente " << s.get_marca() << " " << s.get_denumire() << " in depozit\n";
            return -1;
        }
    }

};


#endif
