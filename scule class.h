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
        denumire = "Lipsa denumire";
        marca = "Lipsa marca";
        culoare_p = culoare_t::lipsa;
        culoare_s = culoare_t::lipsa;
        stock = 0;
        count++;
    }
    scule(const scule* other)
    {
        ///std::cout << "CONSTRUCTOR CU PARAMETRII scule" << '\n';
        denumire = other->denumire;
        marca = other->marca;
        culoare_p = other->culoare_p;
        culoare_s = other->culoare_s;
        stock = other->stock;
        count++;
    }
    scule(const scule& other)
    {
        ///std::cout << "CONSTRUCTOR PRIN REFERINTA scule" << '\n';
        denumire = other.denumire;
        marca = other.marca;
        culoare_p = other.culoare_p;
        culoare_s = other.culoare_s;
        stock = other.stock;
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
        denumire = other.denumire;
        marca = other.marca;
        culoare_p = other.culoare_p;
        culoare_s = other.culoare_s;
        stock = other.stock;
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

    void set_denumire(const std::string denumire)
    {
        this->denumire = denumire;
    }
    void set_marca(const std::string marca)
    {
        this->marca = marca;
    }
    void set_culoare_p(const culoare_t culoare_p)
    {
        this->culoare_p = culoare_p;
    }
    void set_culoare_s(const culoare_t culoare_s)
    {
        this->culoare_s = culoare_s;
    }
    void set_stock(const int stock)
    {
        this->stock = stock;
    }

};

#endif
