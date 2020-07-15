#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> newGRades;

    for (int i = 0; i < grades.size(); i++){
        if ((grades[i] + 1) % 5 == 0 && grades[i] >= 38){
            newGRades.push_back(grades[i] + 1);
        }
        else if ((grades[i] + 2) % 5 == 0 && grades[i] >= 38){
            newGRades.push_back(grades[i] + 2);
        }
        else {
            newGRades.push_back(grades[i]);
        }
    }

    return newGRades;
}

int main() {
    
    int n;
    int value;
    cin >> n;
    vector<int> grades;
    for (int i = 0; i < n; i++){
        cin >> value;
        grades.push_back(value);
        // cout << value << endl;

    }

    vector<int> result = gradingStudents(grades);

    for (int i = 0; i < result.size(); i++){
        cout << result[i] << "\n";
    }

    return 0;
}