#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double salario, inicial;
    int percentual;
    cin >> salario;

    inicial = salario;
    if (salario >= 0 && salario < 400.01){
        percentual = 15;
        salario *= 1.15;
    }
    else if (salario >= 400.01 && salario < 800.01){
        percentual = 12;
        salario *= 1.12;
    }
    else if (salario >= 800.01 && salario < 1200.01){
        percentual = 10;
        salario *= 1.10;
    }
    else if (salario >= 1200.01 && salario < 2000.01){
        percentual = 7;
        salario *= 1.07;
    }
    else{
        percentual = 4;
        salario *= 1.04;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salario - inicial << endl;
    cout << "Em percentual: "<< percentual << " %" << endl;

    return 0;
}
