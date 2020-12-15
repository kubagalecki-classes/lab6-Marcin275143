//#pragma once


#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include "Human.hpp"

using namespace std;

vector <char> foo(list <Human>& lista)
{
    vector <char> Znaki (lista.size()); int  nr_znaku = 0;
    class Porownaj { public: void operator() (Human& osoba) { if (osoba.isMonster() != true) Znaki[nr_znaku] = 'y'; else Znaki[nr_znaku] = 'n'; osoba.birthday(); nr_znaku++; }; } porownanie;
//  class Porownaj { public: void operator() (Human& osoba) { if (osoba.isMonster() != true) return 'y'; else return 'n'; osoba.birthday();}; } porownanie;                           
    for_each(lista.rbegin(), lista.rend(), porownanie);
//  transform(lista.rbegin(), lista.rend(), Znaki[0], porownanie);
    return Znaki;
}
