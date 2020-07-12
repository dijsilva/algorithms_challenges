#include <iostream>
#include <vector>
using namespace std;

vector<int> bubble_sort(vector<int> values){
    int size = values.size() - 1;
     for (int j = 0; j < size; j++){
        for (int i = 0; i < size; i++){
            if (values[i] > values[i + 1]){
                int aux = values[i+1];
                values[i+1] = values[i];
                values[i] = aux;
            }
        }
     }

     return values;
}


int main(){

    int n1, n2, n3;
    vector<int> values;

    cin >> n1 >> n2 >> n3;

    values.push_back(n1);
    values.push_back(n2);
    values.push_back(n3);

    vector<int> result = bubble_sort(values);

    for (auto value: result){
        cout << value << endl;
    }

    cout << "\n";

    for (auto value: values){
        cout << value << endl;
    }
    return 0;
}
