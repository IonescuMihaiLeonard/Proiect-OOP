#ifndef MAIN_CPP_CREAREA_H
#define MAIN_CPP_CREAREA_H

#include <algorithm>
#include <vector>
#include "scule.h"
#include "masini.h"
#include "angajati.h"


void creare_scule(std::vector<scule>& s)
{
    {
        scule s_temp;
        s_temp.set_denumire("Bormasina");
        s_temp.set_marca("Makita");
        s_temp.set_culoare_p(culoare_t::albastru);
        s_temp.set_culoare_s(culoare_t::negru);
        s_temp.set_stock(7);
        s.push_back(s_temp);
    }
    {
        scule s_temp;
        s_temp.set_denumire("Polizor");
        s_temp.set_marca("Makita");
        s_temp.set_culoare_p(culoare_t::albastru);
        s_temp.set_culoare_s(culoare_t::negru);
        s_temp.set_stock(9);
        s.push_back(s_temp);
    }
    {
        scule s_temp;
        s_temp.set_denumire("Drujba");
        s_temp.set_marca("Makita");
        s_temp.set_culoare_p(culoare_t::albastru);
        s_temp.set_culoare_s(culoare_t::negru);
        s_temp.set_stock(16);
        s.push_back(s_temp);
    }
    {
        scule s_temp;
        s_temp.set_denumire("Bormasina");
        s_temp.set_marca("Hilti");
        s_temp.set_culoare_p(culoare_t::rosu);
        s_temp.set_culoare_s(culoare_t::negru);
        s_temp.set_stock(14);
        s.push_back(s_temp);
    }
    {
        scule s_temp;
        s_temp.set_denumire("Rotopercutoare");
        s_temp.set_marca("Hilti");
        s_temp.set_culoare_p(culoare_t::rosu);
        s_temp.set_culoare_s(culoare_t::negru);
        s_temp.set_stock(17);
        s.push_back(s_temp);
    }
    {
        scule s_temp;
        s_temp.set_denumire("Drujba");
        s_temp.set_marca("Hilti");
        s_temp.set_culoare_p(culoare_t::rosu);
        s_temp.set_culoare_s(culoare_t::negru);
        s_temp.set_stock(3);
        s.push_back(s_temp);
    }
}

void creare_masini(std::vector<masini>& m, std::vector<scule>& s)
{
    {
        masini m_temp;
        m_temp.set_marca("Mitsubishi");
        m_temp.set_model("L200");
        m_temp.set_motorizare("Disel");
        m_temp.set_transmisie("Manuala");
        m_temp.set_numar_de_inmatriculare("AG66MLI");
        m_temp.set_culoare_p(culoare_t::negru);
        m_temp.set_culoare_s(culoare_t::rosu);
        m_temp.set_cilindree(2477);
        m_temp.set_an_fabricatie(2009);
        m_temp.adaugare_scula(s[1] , 2);
        m_temp.adaugare_scula(s[3] , 4);
        m_temp.adaugare_scula(s[5] , 1);
        m.push_back(m_temp);
    }
    {
        masini m_temp;
        m_temp.set_marca("Toyota");
        m_temp.set_model("4runner");
        m_temp.set_motorizare("Disel");
        m_temp.set_transmisie("Automata");
        m_temp.set_numar_de_inmatriculare("AG22MLI");
        m_temp.set_culoare_p(culoare_t::negru);
        m_temp.set_culoare_s(culoare_t::rosu);
        m_temp.set_cilindree(3956);
        m_temp.set_an_fabricatie(2015);
        m_temp.adaugare_scula(s[0] , 2);
        m_temp.adaugare_scula(s[2] , 1);
        m_temp.adaugare_scula(s[3] , 1);
        m_temp.adaugare_scula(s[4] , 3);
        m.push_back(m_temp);
    }
    {
        masini m_temp;
        m_temp.set_marca("Hyundai");
        m_temp.set_model("Terracan");
        m_temp.set_motorizare("Benzina");
        m_temp.set_transmisie("Manuala");
        m_temp.set_numar_de_inmatriculare("AG11MLI");
        m_temp.set_culoare_p(culoare_t::negru);
        m_temp.set_culoare_s(culoare_t::rosu);
        m_temp.set_cilindree(3497);
        m_temp.set_an_fabricatie(2002);
        m_temp.adaugare_scula(s[0], 1);
        m_temp.adaugare_scula(s[1], 1);
        m_temp.adaugare_scula(s[2], 1);
        m_temp.adaugare_scula(s[3], 1);
        m_temp.adaugare_scula(s[4], 1);
        m_temp.adaugare_scula(s[5], 1);
        m.push_back(m_temp);
    }
}

void creare_angajati(std::vector<angajati>& a, std::vector<masini>& m)
{
    {
        class angajati temp;
        temp.

        m.erase(m.end() - 2 , m.end() - 1);
    }

}

#endif
