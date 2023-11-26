#include "tablero.hh"
#include <fstream>
#include <string>
#include <vector>

// Constructor
using VC = vector<Casilla>;
using Ma = vector<VC>; 

using VS = vector<string>;
using M = vector<VS>;

int stoii(const std::string& s) {
    int i = 0;
    int j = 0;

    int sign = 1;  // Por defecto, el número es positivo

    // Manejar signo
    if (s[j] == '-') {
        sign = -1;
        ++j;
    }

    while (j < s.size()) {
        // Verificar si es un dígito numérico
        if (isdigit(s[j])) {
            i = i * 10 + (s[j] - '0');
            ++j;
        } else {
            std::cerr << "Error: Carácter no válido en la cadena." << std::endl;
            return 0;  // O manejar el error de alguna otra manera
        }
    }

    return sign * i;
}


M lectora(int linias, int columnas, const string& path)
{
    M Mat(linias, VS(columnas, ""));
    ifstream inFile(path);

    if (!inFile.is_open())
    {
        cerr << "Error: No se pudo abrir el archivo " << path << endl;
        return Mat;
    }

    string x;

    getline(inFile, x);

    for (int i = 0; i < linias; ++i)
    {
        if (getline(inFile, x))
        {
            size_t pos = 0;
            int j = 0;

            while ((pos = x.find(';')) != string::npos && j < columnas)
            {
                Mat[i][j++] = x.substr(0, pos);
                x.erase(0, pos + 1);
            }

            Mat[i][j] = x;
        }
        else
        {
            cerr << "Error: No se pudieron leer suficientes líneas desde el archivo." << endl;
            break;
        }
    }

    inFile.close();
    return Mat;
} 

Tablero::Tablero()
{
    Mat = Ma(MAXx, VC(MAXy, Casilla()));

    // PATH VARIABLE NEEDS CHANGE
    M RawTab = lectora(MAXx*MAXy, 5, "./planogram_table.csv"); 
    string tipo;
    int x, y, pickx, picky;
    
    for(int i = 0; i < RawTab.size(); ++i)
    {
            cout << i << endl;
            string tipo = RawTab[i][2];
            cout << i << endl;            
            x = stoii(RawTab[i][0]);
            y = stoii(RawTab[i][1]);
        cout << "tipo: " << tipo << endl;

        cout << "test_i: " << i << ", tipo:  " << tipo[1] << endl;
        if(tipo[0] == 'a' and tipo[1] != 'l')
        {
            cout << "test if1" << endl;
            pickx = stoii(RawTab[i][3]);
            cout << "test Rawtab i 3: " << RawTab[i][3] << endl;
            cout << "test if2 RawTab i 4: " << RawTab[i][4] << endl;
            picky = stoii(RawTab[i][4]);
            cout << "test if2 RawTab i 4: " << RawTab[i][4] << endl;
            cerr << "picky" << picky << endl;
            cout << "test if3 llega" << endl;
            cout << "Casilla deberia de ser " << tipo << " " << x << " " << y << " " << pickx << " "<< picky << endl;
            Mat[i/47][i%47] = Casilla(tipo, x, y, pickx, picky);
            Mat[i/47][i%47].mostraCas();
        }
        else {

            pickx = 0;
            picky = 0;
            cout << "Casilla deberia de ser " << tipo << " " << x << " " << y << " " << pickx << " "<< picky << endl;
            Mat[i/47][i%47] = Casilla(tipo, x, y, 0, 0);
        }
        Mat[i/47][i%47].mostraCas();



    }
}

// Métodos
/*
void Tablero::colocarPieza(int fila, int columna, char pieza)
{
    if (fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS)
    {
        matriz[fila][columna] = pieza;
    }
}
*/
void Tablero::mostrarTablero() const
{
    for (int i = 0; i < 47; ++i)
    {
        for (int j = 0; j < 20; ++j)
        {
            Mat[i][j].mostraCas();
        }
        cout << endl;
    }
    cout << endl;
}



