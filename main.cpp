#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>

#include "scule.h"
#include "masini.h"
#include "angajati.h"
#include "crearea.h"

void memorie();

double calculare_total_scule(const std::vector <scule>& s);
double calculare_total_masina(const class masini m);
double calculare_total_angajat(const class angajati a);

void afisare_scule(const std::vector <scule>& s);
void afisare_masini(const std::vector <masini>& m);
void afisare_angajati(const std::vector <angajati>& a);

int scule::count = 0;
int masini::count = 0;
int angajati::count = 0;

int main()
{
    std::fstream f("Bd.txt");
    std::vector <scule> s;
    creare_scule(s);

    std::cout << "In depozit inainte de umplerea masinilor avem urmatoarele scule:\n";
    afisare_scule(s);

    std::vector <masini> m;
    creare_masini(m, s);
    std::cout << "In garaj avem urmatoarele masini:\n";
    afisare_masini(m);

    std::cout << "In depozit dupa umplerea masinilor mai avem:\n";
    afisare_scule(s);

    std::vector <angajati> a;
    creare_angajati(a, m);
    std::cout << "La firma noastra avem angajatii:\n";
    afisare_angajati(a);

    std::cout << "In garaj avem urmatoarele masini dupa alocarea masinilor catre angajati:\n";
    afisare_masini(m);

    memorie();
    f.close();
    return 0;
}

double calculare_total_scule(const std::vector <scule>& s)
{
    double total = 0.0;
    for(unsigned long long i=0; i<s.size(); i++)
    {
        total += (s[i].get_stock()) * s[i].get_pret();
    }
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
