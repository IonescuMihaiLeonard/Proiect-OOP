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

    std::vector <scule> s;
    std::cout << "In depozit inainte de umplerea masinilor avem urmatoarele scule:\n";
    creare_scule(s);
    for(unsigned long long i=0; i<s.size(); i++)
        std:: cout << "--" <<s[i];
    std::cout << '\n';

    std::vector <masini> m;
    std::cout << "In garaj avem urmatoarele masini:\n";
    creare_masini(m, s);

    for(unsigned long long i=0; i<m.size(); i++)
        std:: cout << m[i];

    std::cout << "In depozit dupa umplerea masinilor mai avem:\n";
    for(unsigned long long i=0; i<s.size(); i++)
        std:: cout << "--" <<s[i];
    std::cout << '\n';

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
