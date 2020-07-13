#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, x, y;

    cin >> n >> x >> y;

    float icm = (float) n / (x + y);

    cout << fixed << setprecision(2) << icm << endl;

    return 0;
}
