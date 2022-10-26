#ifndef MAIN_CPP_CREAREA_H
#define MAIN_CPP_CREAREA_H

#include "scule.h"
#include "masini.h"
#include "angajati.h"

void creare_scule(std::vector<scule>& s)
{
    scule s_temp;

    s_temp.set_denumire("Bormasina");
    s_temp.set_marca("Makita");
    s_temp.set_culoare_p(culoare_t::albastru);
    s_temp.set_culoare_s(culoare_t::negru);
    s_temp.set_stock(7);
    s.push_back(s_temp);

    s_temp.set_denumire("Polizor");
    s_temp.set_marca("Makita");
    s_temp.set_culoare_p(culoare_t::albastru);
    s_temp.set_culoare_s(culoare_t::negru);
    s_temp.set_stock(9);
    s.push_back(s_temp);

    s_temp.set_denumire("Drujba");
    s_temp.set_marca("Makita");
    s_temp.set_culoare_p(culoare_t::albastru);
    s_temp.set_culoare_s(culoare_t::negru);
    s_temp.set_stock(2);
    s.push_back(s_temp);

    s_temp.set_denumire("Bormasina");
    s_temp.set_marca("Hilti");
    s_temp.set_culoare_p(culoare_t::rosu);
    s_temp.set_culoare_s(culoare_t::negru);
    s_temp.set_stock(14);
    s.push_back(s_temp);

    s_temp.set_denumire("Rotopercutoare");
    s_temp.set_marca("Hilti");
    s_temp.set_culoare_p(culoare_t::rosu);
    s_temp.set_culoare_s(culoare_t::negru);
    s_temp.set_stock(17);
    s.push_back(s_temp);

    s_temp.set_denumire("Drujba");
    s_temp.set_marca("Hilti");
    s_temp.set_culoare_p(culoare_t::rosu);
    s_temp.set_culoare_s(culoare_t::negru);
    s_temp.set_stock(3);
    s.push_back(s_temp);
}

#endif
