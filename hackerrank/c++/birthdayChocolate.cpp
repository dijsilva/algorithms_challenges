#include <iostream>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

int birthday(vector<int> s, int d, int m);

int main(){
    int n, d, m;
    string chocolate, strAux;
    vector<int> squares;


    cin >> n;
    cin.ignore();
    getline(cin, chocolate);
    stringstream stringIsStream(chocolate);

    while(getline(stringIsStream, strAux, ' ')){
        squares.push_back(stoi(strAux));
    }

    cin >> d >> m;

    int result = birthday(squares, d, m);

    cout << result << endl;

    return 0;
}

int birthday(vector<int> s, int d, int m) {
    int possibility = 0;
    for (int i = 0; i < (s.size() - (m -1)); i++){
        vector<int> sub(s.begin() + i, s.begin() + (i + m));
        int sum = accumulate(sub.begin(), sub.end(), 0);
        if (sum == d)
            possibility++;
    }
    return possibility;
}
