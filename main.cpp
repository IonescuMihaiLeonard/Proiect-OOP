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

int scule::count = 0;
int masini::count = 0;
int angajati::count = 0;

int main()
{
    std::fstream f("Bd.txt");
    double total;

    std::vector <scule> s;
    std::cout << "In depozit inainte de umplerea masinilor avem urmatoarele scule:\n";
    creare_scule(s);
    total = 0.0;
    for(unsigned long long i=0; i<s.size(); i++)
    {
        std:: cout << "--" <<s[i];
        total += (s[i].get_stock()) * s[i].get_pret();
    }
    std::cout << "Cu valoare totala de " << total <<"RON\n";
    std::cout << '\n';

    std::vector <masini> m;
    std::cout << "In garaj avem urmatoarele masini:\n";
    creare_masini(m, s);

    for(unsigned long long i=0; i<m.size(); i++)
        std::cout << m[i];

    std::cout << "In depozit dupa umplerea masinilor mai avem:\n";
    total = 0.0;
    for(unsigned long long i=0; i<s.size(); i++)
    {
        std::cout << "--" <<s[i];
        total +=  s[i].get_stock() * s[i].get_pret();
    }

    std::cout << "Cu valoare totala de " << total <<"RON\n";
    std::cout << '\n';

    std::vector <angajati> a;
    creare_angajati(a, m);
    for(unsigned long long i=0; i<a.size(); i++)
        std::cout << "--" <<a[i];


    std::cout << "In garaj avem urmatoarele masini dupa alocarea masinilor catre angajati:\n";

    for(unsigned long long i=0; i<m.size(); i++)
        std:: cout << m[i];

    memorie();
    f.close();
    return 0;
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
