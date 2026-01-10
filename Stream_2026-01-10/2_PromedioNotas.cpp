/*
Pc1 -> 10%
Pc2 -> 10%
Pc3 -> 15%
EP -> 30%
EF -> 35%
Hallar la nota final de un alumno y decir decir si es que apruba.
Nota aprobatoria mayor o igual a 12.5.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << endl << "------------------ Título -------------------" << endl; 
    //Declarando variables
    string nombre;
    double notaPc1, notaPc2, notaPc3, notaEP, notaEF;
    double notaFinal;

    //Pidiendo nombre y datos del alumno
    cout<<"Nombre del alumno: ";
    cin>>nombre;
    cout<<"Nota Pc1: ";
    cin>>notaPc1;
    cout<<"Nota Pc2: ";
    cin>>notaPc2;
    cout<<"Nota Pc3: ";
    cin>>notaPc3;
    cout<<"Nota EP: ";
    cin>>notaEP;
    cout<<"Nota EF: ";
    cin>>notaEF;

    //Cálculos para hallar la nota final
    notaFinal = notaPc1*0.10 + notaPc2*0.10 + notaPc3*0.15 + notaEP*0.30 + notaEF*0.35;
    cout<<endl<<"La nota final de "<<nombre<<" es "<<notaFinal<<endl;

    //¿Aprobó el alumno?
    if (notaFinal >= 12.5) {
        cout<<"El alumno "<<nombre<<" SÍ aprobó :-).";
    } else {
        cout<<"El alumno "<<nombre<<" NO aprobó :-(.";
    }
    
    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    
    return 0;
}