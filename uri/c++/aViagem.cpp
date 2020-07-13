#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    int n_alunos;

    while(cin >> n_alunos){
        if (n_alunos == 0)
            break;

        int sum = 0;
        vector<float> values;
        for (int i = 0; i < n_alunos; i++){
            float value;
            cin >> value;
            sum += value;
            values.push_back(value);
        }

        float average = (float) sum / values.size();
        cout << fixed << setprecision(2) << average << endl;
    }
    return 0;
}
