#ifndef MAIN_CPP_ANGAJATI_H
#define MAIN_CPP_ANGAJATI_H


#include <iostream>
#include <vector>
#include "scule.h"
#include "masini.h"

class angajati
{
private:
    static int count;
    std::string nume;
    std::string prenume;
    long long cnp;
    std::string post;
    unsigned int salariu;
    unsigned int penalizari;
    masini masina;

public:
    angajati();
    explicit angajati(const class angajati* other);
    angajati(const angajati& other);
    angajati(std::string const& nume, std::string const& prenume, long long const& cnp, std::string const& post, unsigned int const& salariu, unsigned int const& penalizari);

    ~angajati();

    friend std::ostream& operator<< (std::ostream& os, const angajati& other)
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
    masini get_masina()const
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
    void set_masina(class masini x)
    {
        this->masina = x;
    }

    angajati& operator= (const angajati& other)
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
