#ifndef MAIN_CPP_CREAREA_H
#define MAIN_CPP_CREAREA_H

#include <algorithm>
#include <vector>
#include <memory>

#include "scula.h"
#include "bormasina.h"
#include "polizor.h"
#include "drujba.h"
#include "lopata.h"

#include "masina.h"
#include "angajat.h"


void creare_scule(std::vector<std::shared_ptr<scula>>& s)
{
    s.push_back(std::make_shared<bormasina>("Bormasina", "Makita", culoare_t::albastru, culoare_t::negru, 217, 52.30, 1500, 1450, "Li-ion"));
    s.push_back(std::make_shared<polizor>("Polizor", "Bosch", culoare_t::albastru, culoare_t::negru, 127, 95.40, 75, 145));
    s.push_back(std::make_shared<drujba>("Drujba", "Hilti", culoare_t::rosu, culoare_t::negru, 157, 252.60, 3.6, 40.1, 70.31));
    s.push_back(std::make_shared<bormasina>("Bormasina", "Hilti", culoare_t::rosu, culoare_t::negru, 73, 152.30, 1900, 1650, "Li-ion"));
    s.push_back(std::make_shared<drujba>("Drujba", "Makita", culoare_t::albastru, culoare_t::negru, 327, 352.60, 4.2, 42.1, 72.31));
    s.push_back(std::make_shared<lopata>("Lopata", "Makita", culoare_t::albastru, culoare_t::negru, 327, 352.60, 53.2, 65));

}

void creare_masini(std::vector<masina>& m, std::vector<std::shared_ptr<scula>> s)
{

    {
        masina m_temp("Mitsubishi", "L200", "Disel", "Manuala", culoare_t::negru, culoare_t::rosu, "AG66MLI", 2477, 2009);
        m_temp.adaugare_scula((*s[0]) , 16);
        m_temp.adaugare_scula((*s[1]) , 16);
        m_temp.adaugare_scula((*s[2]) , 16);
        m_temp.adaugare_scula((*s[3]) , 16);
        m_temp.adaugare_scula((*s[4]) , 16);
        m.push_back(m_temp);


    }
    {
        masina m_temp("Toyota", "4runner", "Disel", "Automata", culoare_t::negru, culoare_t::rosu, "AG22MLI", 3956, 2015);
        m_temp.adaugare_scula((*s[0]) , 12);
        m_temp.adaugare_scula((*s[1]) , 12);
        m_temp.adaugare_scula((*s[2]) , 12);
        m_temp.adaugare_scula((*s[3]) , 12);
        m.push_back(m_temp);
    }
    {
        masina m_temp("Hyundai", "Terracan", "Benzina", "Manuala", culoare_t::negru, culoare_t::rosu, "AG11MLI", 3497, 2002);
        m_temp.adaugare_scula((*s[0]), 18);
        m_temp.adaugare_scula((*s[1]), 18);
        m_temp.adaugare_scula((*s[2]), 18);
        m_temp.adaugare_scula((*s[3]), 18);
        m.push_back(m_temp);
    }
    {
        masina m_temp("Opel", "Frontera B", "Disel", "Manuala", culoare_t::negru, culoare_t::rosu, "AG33MLI", 2171, 1998);
        m.push_back(m_temp);
    }
}

void creare_angajati(std::vector<angajat>& a, std::vector<masina>& m)
{
    {
        class angajat a_temp("Leventiu", "Adrian-George", 1234567890123, "Sofer", 5000, 540);
        a_temp.set_masina(m[2]);
        m.erase(m.end() - 1 , m.end());
        a.push_back(a_temp);
    }
    {
        class angajat a_temp("Popescu", "Andrei-George", 1234568890123, "Secretar", 3000, 0);
        a.push_back(a_temp);
    }
    {
        class angajat a_temp("Besel", "Adrian", 1234560000123, "Sef Garaj", 6000, 0);
        a.push_back(a_temp);
    }
}

#endif
