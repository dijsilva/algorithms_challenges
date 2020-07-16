#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> split(const string &s, char delimiter);

int main(){

    int n;
    while(cin >> n){
        int m = 0, l = 0, carta_m = 0, carta_l= 0, carta_attr = 0;
        vector<int> cartas_m, cartas_l;
        string attributos;
        string strAux;
        cin >> m >> l;

        cin.ignore(); 
        for (int i = 0; i < m; i++){
            getline(cin, attributos);
            stringstream stringIsStream(attributos);
            while (getline(stringIsStream, strAux, ' ')){
                cartas_m.push_back(stoi(strAux));
            }
        }

        for (int j = 0; j < l; j++){
            getline(cin, attributos);
            stringstream stringIsStream(attributos);
            while (getline(stringIsStream, strAux, ' ')){
                cartas_l.push_back(stoi(strAux));
            }
        }

        cin >> carta_m >> carta_l;
        cin >> carta_attr;

        int index_m = (carta_m - 1) * n + (carta_attr - 1);
        int index_l = (carta_l - 1) * n + (carta_attr - 1);

        if(cartas_m[index_m] > cartas_l[index_l])
            cout << "Marcos" << endl;
        else if (cartas_m[index_m] < cartas_l[index_l])
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl;
    }

    return 0;
}
