#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m;
    while(cin >> m){
    int numerador = 0, denominador = 0;
        while(m--){
            int n = 0, c = 0;
            cin >> n >> c;
            numerador += (n * c);
            denominador += c;
        }

        double ira = numerador / (denominador * 100.0);

        cout << fixed << setprecision(4) << ira << endl;
    }

    return 0;
}
