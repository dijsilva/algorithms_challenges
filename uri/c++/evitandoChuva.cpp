#include <iostream>

using namespace std;

int main(){
    int n, total_casa = 0, total_trabalho = 0, tem_no_trabalho = 0, tem_em_casa = 0;
    string ida, volta;
    cin >> n;
    while(n--){
        cin >> ida >> volta;
        if (ida == "chuva"){
            if (tem_em_casa == 0) total_casa++, tem_no_trabalho++;
            else tem_em_casa--, tem_no_trabalho++;
        }
        if (volta == "chuva" ){
            if (tem_no_trabalho == 0) total_trabalho++, tem_em_casa++;
            else tem_no_trabalho--, tem_em_casa++;
        }
    }
        cout << total_casa << " " << total_trabalho << endl;

    return 0;
}
