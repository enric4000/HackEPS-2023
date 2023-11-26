#ifndef CASILLA_HH
#define CASILLA_HH

#include <iostream>
#include <vector>
using namespace std;

class Casilla {
private:
    bool ocupada;
    string tipo;
    int x = 0;
    int y = 0;
    int pickingX = 0;
    int pickingY = 0;

public:
    // Constructor
    Casilla();
    Casilla(string tip, int posx, int posy, int pickX, int pickY);

    string tipoC();
    bool ocu();
    pair<int, int> pick();
    void mostraCas() const;
    void cambiaCas(string tip, int posx, int posy, int pickX, int pickY);
};

#endif