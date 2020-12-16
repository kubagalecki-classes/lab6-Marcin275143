//#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include "Human.hpp"

using namespace std;

class Porownaj { public: char operator() (Human& osoba) { if (osoba.isMonster() != true) return 'y'; else return 'n'; osoba.birthday();}; } porownanie;

vector <char> foo(list <Human>& lista)
{
    transform(lista.rbegin(), lista.rend(), Znaki.begin(), for_each(lista.begin(), lista.end(), porownanie));
}
