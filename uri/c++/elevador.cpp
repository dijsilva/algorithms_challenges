#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int l, c, r1, r2;
    while(cin >> l  >> c >> r1 >> r2){
        if (l == 0 && c == 0 && r1 == 0 && r2 == 0) break;
        else {
            int maior_diametro = r1 > r2 ? r1 * 2 : r2 * 2;
            int menor_lado = l < c ? l : c;
            int soma_dos_raios = r1 + r2;

            int distancia_entre_os_centros = pow(pow(r1 - (l - r2), 2) + pow(r1 - (c - r2), 2),0.5);

            if (maior_diametro <= menor_lado && distancia_entre_os_centros >= soma_dos_raios) cout << "S" << endl;
            else cout << "N" << endl;
        }
    }
    return 0;
}
