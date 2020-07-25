#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int r1, r2, x1, x2, y1, y2;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        float dist = pow(pow(x1 - x2,2) + pow(y1 - y2,2),0.5);

        if (r1 >= (dist + r2)) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }

    return 0;
}
