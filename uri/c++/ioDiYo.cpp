#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> split(const string &s, char delimiter);

int main(){

    int n;
    while(cin >> n){
        int m = 0, l = 0;
        vector<int> cartas_m, cartas_l;
        string teste;
        cin >> m >> l;
        cin >> teste;

        cartas_l = split(teste, ' ');

        cout << "0: " << cartas_l[0] << endl;


    }

    return 0;
}


vector<int> split(const string &s, char delimiter) {
    vector<int> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(stoi(token));
    }
    return tokens;
}
