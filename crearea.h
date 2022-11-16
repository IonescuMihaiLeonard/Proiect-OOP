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
        scule s_temp("Bormasina", "Makita", culoare_t::albastru, culoare_t::negru, 7, 52.30);
        s.push_back(s_temp);
    }
    {
        scule s_temp("Polizor", "Makita", culoare_t::albastru, culoare_t::negru, 9,95.80);
        s.push_back(s_temp);
    }
    {
        scule s_temp("Drujba", "Makita", culoare_t::albastru, culoare_t::negru, 16, 256.20);
        s.push_back(s_temp);
    }
    {
        scule s_temp("Bormasina", "Hilti", culoare_t::rosu, culoare_t::negru, 14, 134.40);
        s.push_back(s_temp);
    }
    {
        scule s_temp("Rotopercutoare", "Hilti", culoare_t::rosu, culoare_t::negru , 17, 197.60);
        s.push_back(s_temp);
    }
    {
        scule s_temp("Drujba", "Hilti", culoare_t::rosu, culoare_t::negru, 3, 298.10);
        s.push_back(s_temp);
    }
}

void creare_masini(std::vector<masini>& m, std::vector<scule>& s)
{
    {
        masini m_temp("Mitsubishi", "L200", "Disel", "Manuala", culoare_t::negru, culoare_t::rosu, "AG66MLI", 2477, 2009);
        m_temp.adaugare_scula(s[1] , 2);
        m_temp.adaugare_scula(s[3] , 4);
        m_temp.adaugare_scula(s[5] , 1);
        m.push_back(m_temp);
    }
    {
        masini m_temp("Toyota", "4runner", "Disel", "Automata", culoare_t::negru, culoare_t::rosu, "AG22MLI", 3956, 2015);
        m_temp.adaugare_scula(s[0] , 2);
        m_temp.adaugare_scula(s[2] , 1);
        m_temp.adaugare_scula(s[3] , 1);
        m_temp.adaugare_scula(s[4] , 3);
        m.push_back(m_temp);
    }
    {
        masini m_temp("Hyundai", "Terracan", "Benzina", "Manuala", culoare_t::negru, culoare_t::rosu, "AG11MLI", 3497, 2002);
        m_temp.adaugare_scula(s[0], 1);
        m_temp.adaugare_scula(s[1], 1);
        m_temp.adaugare_scula(s[2], 1);
        m_temp.adaugare_scula(s[3], 1);
        m_temp.adaugare_scula(s[4], 1);
        m_temp.adaugare_scula(s[5], 1);
        m.push_back(m_temp);
    }
    {
        masini m_temp("Opel", "Frontera B", "Disel", "Manuala", culoare_t::negru, culoare_t::rosu, "AG33MLI", 2171, 1998);
        m.push_back(m_temp);
    }
}

void creare_angajati(std::vector<angajati>& a, std::vector<masini>& m)
{
    {
        class angajati a_temp("Leventiu", "Adrian-George", 1234567890123, "Sofer", 5000, 540);
        a_temp.set_masina(m[2]);
        m.erase(m.end() - 1 , m.end());
        a.push_back(a_temp);
    }
    {
        class angajati a_temp("Popescu", "Andrei-George", 1234568890123, "Secretar", 3000, 0);
        a.push_back(a_temp);
    }
    {
        class angajati a_temp("Besel", "Adrian", 1234560000123, "Sef Garaj", 6000, 0);
        a.push_back(a_temp);
    }
}

#endif
