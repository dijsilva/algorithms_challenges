#include <iostream>

using namespace std;

int main(){


    ios_base::sync_with_stdio(false);

    int n;
    long long total_stolen = 0, attacked = 0, qtd_stolen, sum_stolen;

    cin >> n;
    int stolens[n];
    int total_stars [n];

    for (int i = 0; i < n; i++){
        cin >> stolens[i];
        total_stolen += stolens[i];
        total_stars[i] = 0;
    }

    int i = 0;
    while(i >= 0 && i < n){
        if (!total_stars[i]) total_stars[i] = 1, attacked++;
        if (stolens[i] > 0){
            if(stolens[i] % 2 == 0)
                stolens[i]--, total_stolen--, i--;
            else
                stolens[i]--, total_stolen--, i++;
        }
        else
            i--;
    }
    
    cout << attacked << " " << total_stolen << endl;
    return 0;
}
