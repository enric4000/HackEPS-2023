//#include "article.hh"
#include "customer.hh"
#include "tablero.hh"
using namespace std;

int main()
{
    /*
    vector<Customer> customerArray = readCustomersFromCSV("hackathon_customers_properties.csv");

    for (const auto& customer : customerArray) {
        cout << "ID: " << customer.id << ", Step Seconds: " << customer.step_seconds
             << ", Picking Offset: " << customer.picking_offset << endl;
    }
    */

    Tablero tab = Tablero();
    tab.mostrarTablero();

}