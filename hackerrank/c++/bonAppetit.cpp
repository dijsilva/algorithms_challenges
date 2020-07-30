#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void bonAppetit(vector<int>, int, int);



int main(){

    int n, k, b, v;
    vector<int> bill;
    cin >> n >> k;

    for (int i = 0; i < n; i++ ){
        cin >> v;
        bill.push_back(v);
    }

    cin >> b;

    bonAppetit(bill, k, b);

}


void bonAppetit(vector<int> bill, int k, int b) {
    bill[k] = 0;
    int sum = accumulate(bill.begin(), bill.end(), 0);
    sum /= 2;

    if (b == sum){ cout << "Bon Appetit" << endl; }
    else {cout << b - sum  << endl;}
}

