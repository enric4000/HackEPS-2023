#include "casilla.hh"

Casilla::Casilla() {}

Casilla::Casilla(string tip, int posx, int posy, int pickX, int pickY)
{
    x = posx;
    y = posy;
    tipo = tip;
    if (tipo[0] == 'p' and tipo[1] == 'a')
    {
        ocupada = false;
    }
    else
    {
        ocupada = true;
    }
    pickingX = pickX;
    pickingY = pickY;
}

string Casilla::tipoC()
{

    return tipo;
}

bool Casilla::ocu()
{
    return ocupada;
}

pair<int, int> Casilla::pick()
{

    return make_pair(pickingX, pickingY);

}

void Casilla::mostraCas() const
{

    cout << "Aquesta Casella està en x:" << x << " y:" << y << endl;
    cout << "Es de tipus:" << tipo << " i pots accedir a ella per xPick:" << pickingX << " yPick:" << pickingY << endl;
    cout << "------------------------------------------------------" << endl;

}

void Casilla::cambiaCas(string tip, int posx, int posy, int pickX, int pickY)
{

      tipo = tip;
    if (tipo[0] == 'p' and tipo[1] == 'a')
    {
        ocupada = false;
    }
    else
    {
        ocupada = true;
    }
    pair<int, int> coord;
    pickingX = pickX;
    pickingY = pickY;


}