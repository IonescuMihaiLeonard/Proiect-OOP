#ifndef DEPOZIT_SCULE_CLASS_H
#define DEPOZIT_SCULE_CLASS_H

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
    scule()
    {
        ///std::cout << "CONSTRUCTOR FARA PARAMETRII scule" << '\n';
        this->denumire = "Lipsa denumire";
        this->marca = "Lipsa marca";
        this->culoare_p = culoare_t::lipsa;
        this->culoare_s = culoare_t::lipsa;
        this->stock = 0;
        count++;
    }
    scule(const scule* other)
    {
        ///std::cout << "CONSTRUCTOR CU PARAMETRII scule" << '\n';
        this->denumire = other->denumire;
        this->marca = other->marca;
        this->culoare_p = other->culoare_p;
        this->culoare_s = other->culoare_s;
        this->stock = other->stock;
        count++;
    }
    scule(const scule& other)
    {
        ///std::cout << "CONSTRUCTOR PRIN REFERINTA scule" << '\n';
        this->denumire = other.denumire;
        this->marca = other.marca;
        this->culoare_p = other.culoare_p;
        this->culoare_s = other.culoare_s;
        this->stock = other.stock;
        count++;
    }

    ~scule()
    {
        ///std::cout << "DESTRUCTOR scule" << '\n';
        count--;
    }

    friend std::ostream& operator<< (std::ostream& os, const scule& other)
    {
        os << other.denumire << "|" << other.marca << "|" << other.culoare_p << "|" << other.culoare_s << "|" << other.stock << '\n';
        for(int i=0; i<= 100; i++)
            os << "-";
        os <<'\n';
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
