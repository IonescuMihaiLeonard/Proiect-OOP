#ifndef MAIN_CPP_LOPATA_H
#define MAIN_CPP_LOPATA_H


#include "scula.h"

class lopata :public scula
{
    double suprafata_faras;
    int lungime_maner;

    static int count;

public:

    lopata();
    lopata(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s, int const& stock, double const& pret, double const& suprafata_faras, int const& lungime_maner);

    ~lopata();

    static int get_count()
    {
        return count;
    }

    lopata& operator= (const lopata& other)
    {
        scula::operator=(other);
        this->suprafata_faras = other.suprafata_faras;
        this->lungime_maner = other.lungime_maner;
        return *this;
    }

    std::shared_ptr<scula> clone() const override
    {
        return std::make_shared<lopata>(*this);
    }

    friend std::ostream& operator<< (std::ostream& os, const lopata& other)
    {
        os << static_cast<const scula &>(other) << "cu o suprafata a farasului de " << other.suprafata_faras << "cmc si lungimea manerului de " << other.lungime_maner << "cm";
        return os;
    }



protected:
    void afisare(std::ostream& os)const override
    {
        os << "cu o suprafata a farasului de " << suprafata_faras << "cmc si lungimea manerului de " << lungime_maner << "cm";
    }
};


#endif