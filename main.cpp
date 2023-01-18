#include <iostream>
#include <vector>

#include "scula.h"
#include "bormasina.h"
#include "polizor.h"
#include "drujba.h"

#include "masina.h"
#include "angajat.h"
#include "crearea.h"

#include "exceptii.h"

void memorie();

double calculare_total_scule(const std::vector<std::shared_ptr<scula>>& s);
double calculare_total_masina(const class masina &m);
double calculare_total_angajat(const class angajat &a);

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
    /// Prima afisare a depozitului
    std::vector<std::shared_ptr<scula>> s;
    creare_scule(s);
    std::cout << "In depozit inainte de umplerea masinilor avem urmatoarele scule:\n";
    afisare_scule(s);

    /// Prima afisare a masinilor
    std::vector <masina> m;
    creare_masini(m, s);
    std::cout << "In garaj avem urmatoarele masina:\n";
    afisare_masini(m);

    /// A2-a afisare a depozitului
    std::cout << "In depozit dupa umplerea masinilor mai avem:\n";
    afisare_scule(s);

    /// Prima afisare a angajatilor
    std::vector <angajat> a;
    creare_angajati(a, m);
    std::cout << "La firma noastra avem angajatii:\n";
    afisare_angajati(a);

    /// A2-a afisare a masinilor
    std::cout << "In garaj avem urmatoarele masina dupa alocarea masinilor catre angajat:\n";
    afisare_masini(m);

    /// A2-a afisare a sculelor
    std::cout << "In depozit dupa vanzarea sculelor mai avem:\n";
    afisare_scule(s);

    /// Afisare cifra de afaceri
    double total = vanzari(s, m, a);
    std::cout << "In ziua de azi am strans un total de " << total << "RON\n\n";


    try
    {
        a[1].verificare();
        a[0].verificare();


    }
    catch (eroare_masini &err)
    {
        std::cout << err.what()  << "\n";

    }
    catch (eroare_echipament &err)
    {
        std::cout << err.what()  << "\n";
    }
    catch (...)
    {
        std::cout << "A avut loc o eroare"  << "\n";
    }


    a[0].taie_copac();

    memorie();

    return 0;
}


