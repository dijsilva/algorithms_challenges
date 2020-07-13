#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float renda;
    float imposto = 0;

    cin >> renda;

    renda -= 2000;

    if (renda <= 0.000){
        cout << "Isento" << endl;
    }
    else if (renda <= 1000.000){
        imposto = renda * 0.08;
    }
    else{
        renda -= 1000;
        if ((renda - 500) <= 0.000){
            imposto = 80 + renda * 0.18;
        }
        else{
            if((renda - 1500) <= 0.000){
                imposto = 80 + renda * 0.18;
            }
            else {
                imposto = 80 + 1500 * 0.18 + (renda - 1500) * 0.28;
            }
        }
    }

    if (imposto > 0)
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
        


    return 0;
}
