#include <iostream>
#include <vector>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){

    int total_inputs;
    while (scanf("%d", &total_inputs) != EOF){
        
        vector<int> days;

        float media = 0.0;
        for (int i = 1; i <= total_inputs; i++){
            int min, km;
            float vel;
            cin >> min >> km;
            vel = (float) km / min;

            if (vel > media){
                media = vel;
                days.push_back(i);
            } 
        }

        for (auto day: days){
            cout << day << endl;
        }

    }
    
       return 0;
}
