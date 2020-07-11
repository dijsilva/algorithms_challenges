#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float n1, n2, n3, n4, media;
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1 * 2 + 3 * n2 + 4 * n3 + n4) / 10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 5.0 && media <= 6.9){
        float n5;
        cin >> n5;
        cout << "Aluno em exame.\n" << "Nota do exame: " << n5 << endl;

        media = (media + n5) / 2; 

        if (media >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << media << endl;
    }

    else if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if (media <= 4.9) {
        cout << "Aluno reprovado." << endl;
    }


    return 0;
}
