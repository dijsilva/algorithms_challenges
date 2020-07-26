#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    float ev1, ev2, at, d, sum, prob, p, q;

    while(cin >> ev1 >> ev2 >> at >> d){
        if (ev1 == 0 && ev2 == 0 && at == 0 && d == 0) break;
        else {
            p = at / 6.0;
            q = 1 - p;
            
            ev1 = ev1 / d;
            ev1 = ceil(ev1);
            ev2 = ev2 / d;
            ev2 = ceil(ev2);
            sum = ev1+ev2;

            if (p != 1.0/2) prob = ((1 - pow(q / p, ev1)) / (1 - pow(q / p, sum)));
            else prob = (ev1 / sum);
        }
        cout << fixed << setprecision(1) << prob * 100 << endl;
    }
    return 0;
}
