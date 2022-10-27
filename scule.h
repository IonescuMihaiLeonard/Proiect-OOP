#ifndef MAIN_CPP_SCULE_H
#define MAIN_CPP_SCULE_H

#include <iostream>
#include "enum.h"


class scule
{
private:
    static int count;
    std::string denumire;
    std::string marca;
    culoare_t culoare_p;
    culoare_t culoare_s;
    int stock;

public:
    scule();

    explicit scule(const class scule* other);

    scule(const scule& other);

    ~scule();

    friend std::ostream& operator<< (std::ostream& os, const scule& other)
    {
        os << other.denumire << " " << other.marca << " de culoarea " << other.culoare_p << " cu " << other.culoare_s << " si stock de:" << other.stock << '\n';
        return os;
    }

    scule& operator= (const scule& other)
    {
        this->denumire = other.denumire;
        this->marca = other.marca;
        this->culoare_p = other.culoare_p;
        this->culoare_s = other.culoare_s;
        this->stock = other.stock;
        return *this;
    }

    std::string get_denumire()
    {
        return this->denumire;
    }
    std::string get_marca()
    {
        return this->marca;
    }
    culoare_t get_culoare_p()
    {
        return this->culoare_p;
    }
    culoare_t get_culoare_s()
    {
        return this->culoare_s;
    }
    int get_stock()
    {
        return this->stock;
    }
    static int get_count()
    {
        return count;
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
