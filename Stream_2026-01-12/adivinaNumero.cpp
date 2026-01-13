/*
Adivina el número.
El programa generará un número Pseudoaleatorio y el usuario tiene que adivinarlo.
1. Tendremos 7 intentos para adivinar el número
2. El programa generará el número aleatorio del 1 al 100, lo guardamos en la variable numRandom.
3. El programa nos debe pedir ingresar un número entre el 1 y 100, lo guardamos en la variable numUsuario.
4. Comparar el número numUsuario con el numRamdom mediante if_else.
5. Si son iguales -> Ganaste.
6. Si son diferente -> vuelva a pedirte otro número para comparar.
7. Si no lo adivinas en 7 intentos -> perdiste.
*/

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

const int INTENTOS = 7;

int main () {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    srand(time(0));
    int numRamdon = rand()%100 + 1;
    int numUsuario = 0;
    int cantIntentos = 0;
    do {
        cantIntentos++;
        cout<<"Digite un número del 1 al 100: ";
        cin>>numUsuario;
        if (numUsuario == numRamdon) {
            cout<<"Felicidades adivinaste el Número";
            break;
        } else {
            if (cantIntentos == 7) {
                cout<<"PERDISTE :-("<<endl;
                break;
            }
            if (numUsuario < numRamdon) {
                cout<<"El número es MAYOR. "<<endl;
            } else {
                cout<<"El número es MENOR. "<<endl;
            }  
        }
    } while (cantIntentos < INTENTOS);

    
    return 0;
}