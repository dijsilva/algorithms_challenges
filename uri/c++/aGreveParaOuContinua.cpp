#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int qtd;
    cin >> qtd;

    int sum = 0;
    while(qtd--){
        string type_value;
        int value;
        cin >> type_value >>  value;

        if (type_value == "V")
            sum += value;
        else if (type_value == "G")
            sum -= value;

    }

    string message = sum > 0 ? "A greve vai parar." : "NAO VAI TER CORTE, VAI TER LUTA!";

    cout << message << endl;
         
    return 0;
}
