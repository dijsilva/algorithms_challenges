#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x, y, soma = 0;

    cin >> x;
    cin >> y;

    if (x > y) {swap(x, y);}

    for (int i = x+1; i < y; i++){
        if ((i % 2) != 0) {soma += i;}
    }

    cout << soma << endl;


    return  0;
}
