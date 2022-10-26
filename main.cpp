#include <iostream>
#include <fstream>
#include <vector>
#include <random>

#include "scule.h"
#include "masini.h"
#include "angajati.h"
#include "crearea.h"

int scule::count = 0;
int masini::count = 0;
int angajati::count = 0;

int main()
{
    double memorie;

    std::fstream f("Bd.txt");

    std::vector <scule> s;
    creare_scule(s);

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

    f.close();
    return 0;
}
