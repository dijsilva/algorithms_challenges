#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int convetDecToBin(long long int dec);

int main(){
    long long int n, dec, sum;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> dec;
        sum = convetDecToBin(dec);
        cout << sum << endl;
    }
    return 0;
}


int convetDecToBin(long long int dec){
    long long int sum = 0, count = 0;
    while (dec != 0) {
        if ((dec % 2) == 0) count = 0;
        else count++; if (count > sum) sum = count;
        dec /= 2;
    }

    return sum;
}
