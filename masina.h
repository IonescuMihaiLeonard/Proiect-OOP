#ifndef MAIN_CPP_MASINA_H
#define MAIN_CPP_MASINA_H

#include <iostream>
#include <vector>
#include <memory>

#include "enum.h"
#include "scula.h"

class masina
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
    std::vector<std::shared_ptr<scula>> scule;

public:
    masina();

    explicit masina(const class masina* other);

    masina(const masina& other);
    masina(std::string const& marca, std::string const& model, std::string const& motorizare, std::string const& transmisie, culoare_t const& culoare_p, culoare_t const& culoare_s, std::string const& numar_de_inmatriculare, unsigned short const& cilindree, unsigned short const& an_fabricatie);

    ~masina();

    friend std::ostream& operator<< (std::ostream& os, const class masina& other)
    {
        if(other.marca != "Lipsa marca" && other.model != "Lipsa model")
        {
            os << "In masina " << other.marca << " " << other.model << " din anul " << other.an_fabricatie << " cu motorul " << other.motorizare << " de " << other.cilindree << "cmc" << "\n";
            os << "si cutie "<< other.transmisie <<" cu numarul de inmatriculare " << other.numar_de_inmatriculare << " culoarea " << other.culoare_p << " cu " << other.culoare_s << " " << '\n';

            if(other.scule.size()>0)
            {
                os << "se afla urmatoarele scule:" << '\n';
                for (unsigned long long i=0; i<other.scule.size(); i++)
                    os << "---" << *(other.scule[i]) << '\n';
            }

        }
        return os;
    }

    masina& operator= (const masina& other)
    {
        this->marca = other.marca;
        this->model = other.model;
        this->culoare_p = other.culoare_p;
        this->culoare_s = other.culoare_s;
        this->numar_de_inmatriculare = other.numar_de_inmatriculare;
        this->cilindree = other.cilindree;
        this->an_fabricatie = other.an_fabricatie;
        this->motorizare = other.motorizare;
        this->transmisie = other.transmisie;
        for (unsigned long long i=0; i<other.scule.size(); i++)
            this->scule.push_back(other.scule[i]);

        return *this;
    }

    std::vector<std::shared_ptr<scula>> get_scule()const
    {
        return scule;
    }
    std::string get_marca()const
    {
        return this->marca;
    }
    std::string get_model()const
    {
        return this->model;
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

    int adaugare_scula(class scula& s, const int nrs)
    {
        if(nrs < s.get_stock())
        {

            int x = s.get_stock() - nrs;
            s.set_stock(x);

            this->scule.push_back(s.clone());
            scule[scule.size()-1]->set_stock(nrs);
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
