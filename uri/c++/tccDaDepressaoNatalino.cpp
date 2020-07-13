#include <iostream>

using namespace std;

int main(){
    int entrega, prazo;
    
    cin >> entrega >> prazo;

    if((prazo - entrega) < 0 || prazo >= 24){
        cout << "Eu odeio a professora!" << endl;
    }
    else if ((prazo - entrega) >= 3){
		cout << "Muito bem! Apresenta antes do Natal!" << endl;
    }
    else{
        cout << "Parece o trabalho do meu filho!" << endl;
        if (((entrega + 2)) < 24){
            cout << "TCC Apresentado!" << endl;
        }
        else {
            cout << "Fail! Entao eh nataaaaal!" << endl;
        }
    } 
        
    return 0;
}
