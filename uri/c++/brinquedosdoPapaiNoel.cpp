#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n, count_m = 0, count_f = 0;
    string name, gender;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> name >> gender;
        if (!gender.compare("M")) count_m++;
        else if (!gender.compare("F")) count_f++;
    }
    
    cout << count_m << " carrinhos" << endl;
    cout << count_f << " bonecas" << endl;
    
    return 0;
}
