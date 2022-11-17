#include <iostream>
#include <vector>
#include "scule.h"
#include "angajati.h"
#include "masini.h"


double calculare_total_scule(const std::vector <scule>& s)
{
    double total = 0.0;
    for(unsigned long long i=0; i<s.size(); i++)
        total += (s[i].get_stock()) * s[i].get_pret();
    return total;
}
double calculare_total_masina(const class masini m)
{
    return calculare_total_scule(m.get_scule());
}
double calculare_total_angajat(const class angajati a)
{
    return calculare_total_masina(a.get_masina());
}

void afisare_scule(const std::vector <scule>& s)
{
    for(unsigned long long i=0; i<s.size(); i++)
        std:: cout << "--" <<s[i];

    std::cout << "Cu valoare totala de " << calculare_total_scule(s) <<"RON\n";
    std::cout << '\n';
}
void afisare_masini(const std::vector <masini>& m)
{
    for(unsigned long long i=0; i<m.size(); i++)
    {
        std::cout << m[i];
        if(calculare_total_masina(m[i]) > 0)
            std::cout << "Cu valoare totala de " << calculare_total_masina(m[i]) << "RON";
        std::cout <<"\n\n";
    }
}
void afisare_angajati(const std::vector <angajati>& a)
{
    for(unsigned long long i=0; i<a.size(); i++)
    {
        std::cout << "--" <<a[i];
        if(calculare_total_angajat(a[i]))
            std::cout << "Cu valoare totala de " << calculare_total_angajat(a[i]) << "RON";
        std::cout << "\n\n";
    }
}

double vanzare_scula_final(int nr, class scule& s)
{
    if(s.get_stock() >= nr)
    {
        s.set_stock(s.get_stock()-nr);
        return s.get_pret()*nr;
    }
    else
    {
        std::cout << "Nu ai suficiente " << s.get_marca() << " " << s.get_denumire() << " ";
        return 0;
    }

}

void memorie()
{
    double memorie;
    memorie = 1.0 * ((scule::get_count() * sizeof(scule)) + (masini::get_count() * sizeof(masini)) + (angajati::get_count() * sizeof(angajati))) / 1024;

    std::cout << "Programul are nevoie de ";
    if(memorie < 1024)
        std::cout << memorie << "Kb"<< "\n";
    else
    {
        memorie /= 1024;
        if(memorie < 1024)
            std::cout << memorie << "Mb"<< "\n";
        else
        {
            memorie /= 1024;
            std::cout << memorie << "Gb"<< "\n";
        }
    }
    std::cout << " pentru obiectele din clasele:\n";
    std::cout << "--scule  " << scule::get_count() << "\n";
    std::cout << "--masini  " << masini::get_count() << "\n";
    std::cout << "--angajati  " << angajati::get_count() << "\n";


}

double vanzari(std::vector<scule>& s, std::vector<masini>& m, std::vector<angajati>& a)
{
    double old_total = 0.0, total = 0.0;
    std::vector<scule> s_temp;
    class masini m_temp;


    total += vanzare_scula_final(2,s[0]);
    if(old_total == total)
        std::cout << "in Depzit\n";
    old_total = total;
    total += vanzare_scula_final(2,s[1]);
    if(old_total == total)
        std::cout << "in Depzit\n";
    old_total = total;
    total += vanzare_scula_final(12,s[2]);
    if(old_total == total)
        std::cout << "in Depzit\n";
    old_total = total;
    total += vanzare_scula_final(23,s[3]);
    if(old_total == total)
        std::cout << "in Depzit\n";
    old_total = total;
    total += vanzare_scula_final(4,s[4]);
    if(old_total == total)
        std::cout << "in Depzit\n";
    old_total = total;
    total += vanzare_scula_final(2,s[5]);
    if(old_total == total)
        std::cout << "in Depzit\n";
    old_total = total;

    s_temp = m[0].get_scule();
    total += vanzare_scula_final(1,s_temp[0]);
    if(old_total == total)
        std::cout << "in masina " << m[0].get_marca() << m[0].get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[1]);
    if(old_total == total)
        std::cout << "in masina " << m[0].get_marca() << m[0].get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[2]);
    if(old_total == total)
        std::cout << "in masina " << m[0].get_marca() << m[0].get_model() << "\n";
    old_total = total;


    s_temp = m[1].get_scule();
    total += vanzare_scula_final(2,s_temp[0]);
    if(old_total == total)
        std::cout << "in masina " << m[1].get_marca() << m[1].get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[1]);
    if(old_total == total)
        std::cout << "in masina " << m[1].get_marca() << m[1].get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[2]);
    if(old_total == total)
        std::cout << "in masina " << m[1].get_marca() << m[1].get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(3,s_temp[3]);
    if(old_total == total)
        std::cout << "in masina " << m[1].get_marca() << m[1].get_model() << "\n";
    old_total = total;


    m_temp = a[0].get_masina();
    s_temp = m_temp.get_scule();
    total += vanzare_scula_final(1,s_temp[0]);
    if(old_total == total)
        std::cout << "in masina " << m_temp.get_marca() << m_temp.get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[1]);
    if(old_total == total)
        std::cout << "in masina " << m_temp.get_marca() << m_temp.get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[2]);
    if(old_total == total)
        std::cout << "in masina " << m_temp.get_marca() << m_temp.get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[3]);
    if(old_total == total)
        std::cout << "in masina " << m_temp.get_marca() << m_temp.get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[4]);
    if(old_total == total)
        std::cout << "in masina " << m_temp.get_marca() << m_temp.get_model() << "\n";
    old_total = total;
    total += vanzare_scula_final(1,s_temp[5]);
    if(old_total == total)
        std::cout << "in masina " << m_temp.get_marca() << m_temp.get_model() << "\n";

    std::cout << "\n";

    return total;
}