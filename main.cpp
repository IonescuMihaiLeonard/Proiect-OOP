#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>

#include "scula.h"
#include "bormasina.h"
#include "polizor.h"
#include "drujba.h"

#include "masina.h"
#include "angajat.h"
#include "crearea.h"

void memorie();

double calculare_total_scule(const std::vector<std::shared_ptr<scula>>& s);
double calculare_total_masina(const class masina m);
double calculare_total_angajat(const class angajat a);

void afisare_scule(const std::vector<std::shared_ptr<scula>>& s);
void afisare_masini(const std::vector <masina>& m);
void afisare_angajati(const std::vector <angajat>& a);

double vanzari(const std::vector<std::shared_ptr<scula>>& s, std::vector<masina>& m, std::vector<angajat>& a);
double vanzare_scula_final(int nr, class scula& s);

int scula::count = 0;
int masina::count = 0;
int angajat::count = 0;
int bormasina::count = 0;
int polizor::count = 0;
int drujba::count = 0;

int main()
{
    std::fstream f("Bd.txt");
    std::vector<std::shared_ptr<scula>> s;
    creare_scule(s);

    std::cout << "In depozit inainte de umplerea masinilor avem urmatoarele scule:\n";
    afisare_scule(s);

    std::vector <masina> m;
    creare_masini(m, s);
    std::cout << "In garaj avem urmatoarele masina:\n";
    afisare_masini(m);

    std::cout << "In depozit dupa umplerea masinilor mai avem:\n";
    afisare_scule(s);

    std::vector <angajat> a;
    creare_angajati(a, m);
    std::cout << "La firma noastra avem angajatii:\n";
    afisare_angajati(a);

    std::cout << "In garaj avem urmatoarele masina dupa alocarea masinilor catre angajat:\n";
    afisare_masini(m);

    vanzare_scula_final(2, (*s[1]));

    std::cout << "In depozit dupa vanzarea sculelor mai avem:\n";
    afisare_scule(s);

    ///double total = vanzari(s, m, a);
    ///std::cout << "In ziua de azi am strans un total de " << total << "RON\n\n";



    memorie();
    f.close();
    return 0;
}


