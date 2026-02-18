/*
Lanzamiento de 2 dados hasta que la suma de los dados sea igua a 7
- Generar aleatoriamente el valor de cada dado.
- Sumar los valores de los dados en cada lanzamiento.
- Si la suma es igual a 7, termina los lanzamientos

lazamientos     valorDado1      valorDado2      sumaDados
Lanzamiento 1   1               4               5
lanzamiento 2   3               6               9
.....
*/

#include <iostream>
#include <random>

using namespace std;

int main() {
    system("cls");
    srand(time(0));
    int valorDado1, valorDado2, sumaDados;
    int contarPares = 0, contarImpares = 0;
    int intento = 1;
    cout<<"Lanzamientos        Dado 1   Dado 2   Suma"<<endl;
    do {
        //Cálculo de números aleatorios y suma de valores
        valorDado1 = rand()%6 + 1;
        valorDado2 = rand()%6 + 1;
        sumaDados = valorDado1 + valorDado2;

        //Cálculo de suma pares e impares
        if (sumaDados%2 == 0) contarPares++;
        if (sumaDados%2 != 0) contarImpares++;

        //Impresión de lanzamientos y valores
        cout<<"Lanzamiento "<<intento<<"        "<<valorDado1<<"         "<<valorDado2<<"      "<<sumaDados<<endl;
        intento++;
        
    } while (sumaDados != 7);

    cout<<endl<<"Cantidad de suma impares: "<<contarImpares;
    cout<<endl<<"Cantidad de suma pares: "<<contarPares;

    return 0;
}