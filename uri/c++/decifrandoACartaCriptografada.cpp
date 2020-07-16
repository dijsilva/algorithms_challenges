#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int c, n;

    while(cin >> c >> n){
        string antes, depois;

        cin.ignore();
        getline(cin, antes);
        getline(cin, depois);

        vector<char> vecAntes;
        vector<char> vecDepois;

        for (int i = 0; i < antes.size(); i++){
            vecAntes.push_back(tolower(antes[i]));
            vecDepois.push_back(tolower(depois[i]));
        }

        for (int i = 0; i < n; i++){
            string frase;
            getline(cin, frase);

            for (int j = 0; j < frase.size(); j++){

                if (isupper(frase[j])){

                    auto findPos = find(vecAntes.begin(), vecAntes.end(), tolower(frase[j]));
                    auto findPos2 = find(vecDepois.begin(), vecDepois.end(), tolower(frase[j]));
                     if (findPos != vecAntes.end()){
                        frase[j] = toupper(vecDepois[findPos - vecAntes.begin()]);
                     }
                     else if (findPos2 != vecDepois.end()){
                         frase[j] = toupper(vecAntes[findPos2 - vecDepois.begin()]);
                     }
                }
                else {
                    auto findPos = find(vecAntes.begin(), vecAntes.end(), frase[j]);
                    auto findPos2 = find(vecDepois.begin(), vecDepois.end(), frase[j]);
                     if (findPos != vecAntes.end()){
                        frase[j] = vecDepois[findPos - vecAntes.begin()];
                     }
                     else if (findPos2 != vecDepois.end()){
                         frase[j] = vecAntes[findPos2 - vecDepois.begin()];
                     }

                }
            }
            cout << frase << endl;
        }
        cout << endl;
    }

    return 0;
}
