#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    while(cin >> n){
        int tam = 1, count = 1;
        while(count % n){
            count = ((count * 10) + 1) % n;
            tam++;
        }
        cout << tam << endl; 
    }
    
    return 0;
}

