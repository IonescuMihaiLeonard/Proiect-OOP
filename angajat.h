#ifndef MAIN_CPP_ANGAJAT_H
#define MAIN_CPP_ANGAJAT_H


#include <iostream>
#include <vector>
#include "scula.h"
#include "drujba.h"
#include "masina.h"

class angajat
{
private:
    static int count;
    std::string nume;
    std::string prenume;
    long long cnp;
    std::string post;
    unsigned int salariu;
    unsigned int penalizari;
    class masina masina;

public:
    angajat();
    explicit angajat(const class angajat* other);
    angajat(const angajat& other);
    angajat(std::string const& nume, std::string const& prenume, long long const& cnp, std::string const& post, unsigned int const& salariu, unsigned int const& penalizari);

    ~angajat();

    friend std::ostream& operator<< (std::ostream& os, const angajat& other)
    {
        os << other.nume << " " << other.prenume << " cu cnp-ul:" << other.cnp << " pe postul de " << other.post << "\n";
        os << "  cu salariul de " << other.salariu << "RON si penalizari de " << other.penalizari << "RON\n";
        if(other.masina.get_marca() != "Lipsa marca" && other.masina.get_model() != "Lipsa model")
        {
            os << "  Care are in grija masina :\n";
            os << other.masina;
        }
        return os;
    }

    static int get_count()
    {
        return count;
    }
    class masina get_masina()const
    {
        return masina;
    }

    void set_nume(std::string const& x)
    {
        this->nume = x;
    }
    void set_prenume(std::string const& x)
    {
        this->prenume = x;
    }
    void set_cnp(long long const& x)
    {
        this->cnp = x;
    }
    void set_post(std::string const& x)
    {
        this->post = x;
    }
    void set_salariu(unsigned int const& x)
    {
        this->nume = x;
    }
    void set_penalizari(unsigned int const& x)
    {
        this->penalizari = x;
    }
    void set_masina(class masina x)
    {
        this->masina = x;
    }

    void verificare()
    {
        if(masina.get_scule().size() > 0)
            for(std::shared_ptr<scula> sc : masina.get_scule())
            {
                sc->utilizeaza();
                std::cout << "\n";
            }
        else
        {
            std::cout << "Angajatul " << prenume << " " << nume << " nu are masina!!!!\n";
        }
    }
    void taie_copac()
    {
        for(auto &sc : masina.get_scule())
            try
            {
                auto& drujba = dynamic_cast<class drujba&>(*sc);

                drujba.utilizeaza();
                std::cout << "CADEEE\n";

            }
            catch(std::bad_cast& err)
            {
                std::cout << err.what() << ":scula asta nu e drujba" << "\n";
            }
    }

    angajat& operator= (const angajat& other)
    {
        this->nume = other.nume;
        this->prenume = other.prenume;
        this->cnp = other.cnp;
        this->post = other.post;
        this->salariu = other.salariu;
        this->penalizari = other.penalizari;
        this->masina = other.masina;
        return *this;
    }

};

#endif
