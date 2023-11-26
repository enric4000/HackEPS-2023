#ifndef TABLERO_HH
#define TABLERO_HH

#include <iostream>
#include <vector>
#include "casilla.hh"
using namespace std;


class Tablero {

private:
    int a = 47;
    int b = 20;
    vector<vector<Casilla>> Mat;
    //vector<vector<Casilla>> Mat(a, vector<Casilla>(b));
    static const int MAXy = 20;
    static const int MAXx = 47;

public:
    Tablero();

    // Métodos
    void cargarTablero();
    void mostrarTablero() const;
};

#endif // TABLERO_H