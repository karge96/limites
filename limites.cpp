#include <iostream>
#include <cmath> // Para std::pow
#include <limits> // Para std::numeric_limits
#include <string> // Para std::string y std::getline
#include <sstream> // Para std::stringstream

using namespace std;

// Función para leer y validar la entrada de números enteros positivos
int numeroEntero(const string& mensaje) {
    int numero;
    string entrada;
    while (true) {
        cout << mensaje;
        getline(cin, entrada); // Leer la entrada como una línea completa

        stringstream ss(entrada); // Convertir la línea a un stringstream
        if (ss >> numero && ss.eof() && numero > 0) { // Verificar si se puede extraer un entero positivo y si no hay caracteres restantes
            return numero;
        } else {
            cout << "Entrada invalida. Por favor ingrese un numero entero positivo." << endl;
        }
    }
}

int main() {
    // Leer el límite máximo y la base usando la función numeroEntero
    int limiteMaximo = numeroEntero("Ingrese el limite maximo entero positivo: ");
    int base = numeroEntero("Ingrese la base entera positiva: ");

    // Calcular y visualizar todas las potencias de la base menores que el límite máximo
    cout << "Las potencias de " << base << " menores que " << limiteMaximo << " son:" << endl;
    int potencia = 1;
    int exponente = 0;

    while (potencia < limiteMaximo) {
        cout << base << "^" << exponente << " = " << potencia << endl;
        exponente++;
        potencia = pow(base, exponente);
    }

    return 0;
}
