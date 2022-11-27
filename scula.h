#ifndef MAIN_CPP_SCULA_H
#define MAIN_CPP_SCULA_H

#include <iostream>
#include "enum.h"


class scula
{
private:
    static int count;

    std::string denumire;
    std::string marca;
    culoare_t culoare_p;
    culoare_t culoare_s;
    int stock;
    double pret;

public:
    scula();

    explicit scula(const class scula* other);

    scula(const scula& other);

    scula(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p, culoare_t const& culoare_s, int const& stock, double const& pret);

    ~scula();

    friend std::ostream& operator<< (std::ostream& os, const scula& other)
    {
        os << other.denumire << " " << other.marca << " de culoarea " << other.culoare_p << " cu " << other.culoare_s << " si stock de " << other.stock << " bucati la pret de " << other.pret << "RON" << '\n';
        return os;
    }

    scula& operator= (const scula& other)
    {
        this->denumire = other.denumire;
        this->marca = other.marca;
        this->culoare_p = other.culoare_p;
        this->culoare_s = other.culoare_s;
        this->stock = other.stock;
        this->pret = other.pret;
        return *this;
    }

    std::string get_denumire()const
    {
        return this->denumire;
    }
    std::string get_marca()const
    {
        return this->marca;
    }
    culoare_t get_culoare_p()const
    {
        return this->culoare_p;
    }
    culoare_t get_culoare_s()const
    {
        return this->culoare_s;
    }
    int get_stock()const
    {
        return this->stock;
    }
    static int get_count()
    {
        return count;
    }
    double get_pret()const
    {
        return pret;
    }

    void set_denumire(const std::string& x)
    {
        this->denumire = x;
    }
    void set_marca(const std::string& x)
    {
        this->marca = x;
    }
    void set_culoare_p(const culoare_t x)
    {
        this->culoare_p = x;
    }
    void set_culoare_s(const culoare_t x)
    {
        this->culoare_s = x;
    }
    void set_stock(const int x)
    {
        this->stock = x;
    }


};

#endif
