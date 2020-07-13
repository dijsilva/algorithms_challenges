#include <iostream>

using namespace std;

int main(){
    int qtd, anoes = 0, hobbits = 0, humanos = 0, elfos = 0, magos = 0;
    cin >> qtd;

    while(qtd--){
        string name, type;
        cin >> name >> type;

        if (type == "A")
            anoes++;
        else if (type == "E")
            elfos++;
        else if (type == "H")
            humanos++;
        else if (type == "M")
            magos++;
        else if (type == "X")
            hobbits++;
    }

    cout << hobbits << " Hobbit(s)" << endl;
    cout << humanos << " Humano(s)" << endl;
    cout << elfos << " Elfo(s)" << endl;
    cout << anoes << " Anao(s)" << endl;
    cout << magos << " Mago(s)" << endl;

    return 0;
}
