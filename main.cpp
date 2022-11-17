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

double vanzari(std::vector<scule>& s, std::vector<masini>& m, std::vector<angajati>& a);
double vanzare_scula_final(int nr, class scule& s);

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

    vanzare_scula_final(2, s[1]);

    std::cout << "In depozit dupa vanzarea sculelor mai avem:\n";
    afisare_scule(s);

    double total = vanzari(s, m, a);
    std::cout << "In ziua de azi am strans un total de " << total << "RON\n";

    memorie();
    f.close();
    return 0;
}


