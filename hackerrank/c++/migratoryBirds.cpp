#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int migratoryBirds(vector<int> arr) {
    int one = 0, two = 0, three = 0, four = 0, five = 0;

    for (auto x : arr){
        switch(x){
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            default:
                break;
        };
    }
    vector<int> values={one, two, three, four, five};
    int maior = 0, bird = 0;

    for (int i = 1; i <= values.size(); i++){
        if (values[i - 1] > maior || (values[i - 1] == maior && i < bird)) maior = values[i-1], bird = i;
    }

    return bird;
}


int main(){
    int n;
    int aux;
    vector<int> numbers;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        numbers.push_back(aux);
    }    

    int result = migratoryBirds(numbers);

    cout << result << endl;
    return 0;
}






