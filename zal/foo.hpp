#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

vector <char> foo(list <Human>& lista)
{
class Porownaj { public: char operator() (Human &osoba) { if (osoba.isMonster() != true) return 'y'; else return 'n'; osoba.birthday(); }; } porownanie;
        vector <char> Znaki (lista.size()); 
    // char znak;
    //  for_each(lista.rbegin(), lista.rend(), porownanie);
        transform(lista.rbegin(), lista.rend(), Znaki.begin(), porownanie);
        return Znaki;
}
