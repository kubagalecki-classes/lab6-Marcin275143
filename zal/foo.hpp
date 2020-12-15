//#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include "Human.hpp"

class Porownaj { public: char operator() (Human& osoba) { if (osoba.isMonster() != true) return 'y'; else return 'n'; osoba.birthday();}; } porownanie;
//  class Porownaj { public: void operator() (Human& osoba) { if (osoba.isMonster() != true) Znaki[nr_znaku] = 'y'; else Znaki[nr_znaku] = 'n'; osoba.birthday(); nr_znaku++; }; } porownanie; 
//  auto transformacja[](Human czlowiek) { if (czlowiek.isMonster() != true) Znaki[nr_znaku] = 'y'; else Znaki[nr_znaku] = 'n'; czlowiek.birthday(); nr_znaku++; };

vector <char> foo(list <Human>& lista)
{
    vector <char> Znaki(lista.size()); int  nr_znaku = 0;
    
//  for_each(lista.rbegin(), lista.rend(), transformacja);
//  for_each(lista.rbegin(), lista.rend(), porownanie);

    transform(lista.rbegin(), lista.rend(), Znaki.begin(), porownanie);
    return Znaki;
}
