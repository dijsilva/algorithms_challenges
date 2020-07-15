#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int c, n;

    while(cin >> c >> n){
        string cifra, original;

        cin >> cifra;
        cin >> original;
        for (int i = 0; i < n; i++){
            string frase;
            fflush(stdin);
            getline(cin, frase);
            cout << "string: " << frase << endl;
        }
    }

    return 0;
}
