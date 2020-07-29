#include <iostream>

using namespace std;

int main(){

    int h1, m1, h2, m2, diff_h, diff_m;

    cin >> h1 >> m1 >> h2 >> m2;

    if ((h2 - h1) == 0){
        diff_h = h2 - h1;
        if ((m2 - m1) > 0) {
            diff_m = m2 - m1;
        }
        else if ((m2 - m1) == 0){
            diff_m = 0; 
            diff_h = 24;
        }
        else {
            diff_m = 60 + (m2 - m1); 
            diff_h = 23;
        }
    }

    else if ((h2 - h1) > 0){
        diff_h = h2 - h1;
        if ((m2 - m1) > 0){
            diff_m = m2 - m1;
        }
        else if ((m2 - m1) == 0){
            diff_m = 0;
            diff_h++;
        }
        else {
            diff_m = 60 + (m2 - m1); 
            diff_h -= 1;
        }
    }

    else if ((h2 - h1) < 0){
        diff_h = 24 + (h2-h1);
        if ((m2 - m1) > 0) {
            diff_m = m2 - m1;
            diff_h++;
        }
        else if ((m2 - m1) == 0) {
            diff_m = 0;
            diff_h++;
        }
        else {
            diff_m = 60 + (m2 - m1); 
            diff_h -= 1;
        }

    }

    cout << "O JOGO DUROU " << diff_h << " HORA(S) E " << diff_m << " MINUTO(S)" << endl;



    return 0;
}
