#ifndef MAIN_CPP_CLIENT_H
#define MAIN_CPP_CLIENT_H

#include "vector"

#include "scula.h"
#include "bormasina.h"
#include "polizor.h"
#include "drujba.h"
#include "lopata.h"

class client
{
private:
    static client* instance;
    double total = 0;
    std::vector<std::shared_ptr<scula>> scule;

    client() {}
    client(const client&) = delete;
    client& operator=(const client&) = delete;

public:
    static client* getInstance()
    {
        if (!instance)
        {
            instance = new client();
        }
        return instance;
    }
    void calc_total()
    {
        for(auto scula : scule)
        {
            total += scula->get_pret() * scula->get_stock();
        }
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

    std::vector<std::shared_ptr<scula>> get_scule()const
    {
        return scule;
    }

};


#endif
