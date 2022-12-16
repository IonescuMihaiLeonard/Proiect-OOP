#ifndef MAIN_CPP_POLIZOR_H
#define MAIN_CPP_POLIZOR_H

#include "scula.h"

class polizor : public scula
{
    static int count;

    int putere;
    int turatie;

public:
    polizor();
    polizor(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s, int const& stock, double const& pret, int const& putere, int const& turatie);

    ~polizor();

    static int get_count()
    {
        return count;
    }


    std::shared_ptr<scula> clone() const override
    {
        return std::make_shared<polizor>(*this);
    }

    friend std::ostream& operator<< (std::ostream& os, const polizor& other)
    {
        os << static_cast<const scula &>(other) << "cu o turatie de " << other.turatie << "rpm si putere de " << other.putere << "W";
        return os;
    }

protected:
    void afisare(std::ostream& os)const override
    {
        os << " cu o turatie de " << turatie << "rpm si putere de " << putere << "W";
    }
};


#endif