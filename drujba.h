#ifndef MAIN_CPP_DRUJBA_H
#define MAIN_CPP_DRUJBA_H

#include "scula.h"

class drujba : public scula
{
    static int count;

    double putere;
    double lg_sina;
    double cilindree;

public:

    drujba();
    drujba(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s, int const& stock, double const& pret, double const putere, double const lg_sina, double const cilindree);

    ~drujba();

    static int get_count()
    {
        return count;
    }

    std::shared_ptr<scula> clone() const override
    {
        return std::make_shared<drujba>(*this);
    }

    friend std::ostream& operator<< (std::ostream& os, const drujba& other)
    {
        os << static_cast<const scula &>(other) << "cu o putere de " << other.putere << "Kw, lungimea sinei de " << other.lg_sina << "cm si cilindree de " << other.cilindree << "cmc";
        return os;
    }
protected:
    void afisare(std::ostream& os)const override
    {
        os << " cu o putere de " << putere << "Kw, lungimea sinei de " << lg_sina << "cm si cilindree de " << cilindree << "cmc";
    }
};


#endif