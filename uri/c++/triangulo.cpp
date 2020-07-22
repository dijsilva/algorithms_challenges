#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c; 
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && c + b > a){
        float perimetro = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }
    else {
        float area = (a + b)*c / 2;
        cout << "Area = " << fixed << setprecision(1) << area << endl;;
    }


    return 0;
}
