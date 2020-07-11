#include <iostream>

using namespace std;

string definePosition(float x, float y){

    if (x == 0.0 && y == 0.0){
        return "Origem";
    }
    else if(x == 0.0){
        return "Eixo Y";
    }
    else if (y == 0.0){
        return "Eixo X";
    }

    else {
        if (x < 0.0 && y > 0.0){
            return "Q2";
        }
        else if (x < 0.0 && y < 0.0){
            return "Q3";
        }
        else if (x > 0.0 && y > 0.0){
            return "Q1";
        }
        else {
            return "Q4";
        }
    }
}



int main(){

    float x, y;

    cin >> x >> y;

    string result = definePosition(x, y);

    cout << result << endl;

    return 0;
}
